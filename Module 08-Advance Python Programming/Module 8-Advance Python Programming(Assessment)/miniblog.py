import os
import tkinter as tk
from tkinter import messagebox, Listbox, END

# ---------------- CLASSES ----------------

class User:
    def __init__(self, username):
        self.username = username

class Post:
    def __init__(self, user, title, content):
        self.user = user
        self.title = title
        self.content = content

    def get_filename(self):
        """Format: username_title.txt"""    
        safe_user = self.user.replace(" ", "_")
        safe_title = self.title.replace(" ", "_")
        return f"{safe_user}_{safe_title}.txt"

    def save_to_file(self):
        try:
            if not os.path.exists("posts"):
                os.mkdir("posts")

            filename = os.path.join("posts", self.get_filename())
            with open(filename, "w", encoding="utf-8") as f:
                f.write(f"Author: {self.user}\n")
                f.write(f"Title: {self.title}\n\n")
                f.write(self.content)
            messagebox.showinfo("Success", f"Post '{self.title}' saved successfully!")
        except Exception as e:
            messagebox.showerror("Error", f"Could not save post: {e}")

# ---------------- GUI APPLICATION ----------------

class MiniBlogApp:
    def __init__(self, root):
        self.root = root
        self.root.title("MiniBlog App")
        self.root.geometry("600x500")
        self.root.config(bg="#f5f5f5")

        # USER INPUTS
        tk.Label(root, text="Your Name:", bg="#f5f5f5").pack(pady=5)
        self.username_entry = tk.Entry(root, width=40)
        self.username_entry.pack(pady=5)

        tk.Label(root, text="Post Title:", bg="#f5f5f5").pack(pady=5)
        self.title_entry = tk.Entry(root, width=40)
        self.title_entry.pack(pady=5)

        tk.Label(root, text="Post Content:", bg="#f5f5f5").pack(pady=5)
        self.content_text = tk.Text(root, height=10, width=60)
        self.content_text.pack(pady=5)

        tk.Button(root, text="Save Post", command=self.save_post, bg="#0078D7", fg="white").pack(pady=10)

        # VIEW SECTION
        tk.Label(root, text="Your Saved Posts:", bg="#f5f5f5").pack(pady=5)
        self.post_listbox = Listbox(root, width=50, height=6)
        self.post_listbox.pack(pady=5)

        tk.Button(root, text="Refresh List", command=self.load_posts).pack(pady=3)
        tk.Button(root, text="View Post", command=self.view_post, bg="#4CAF50", fg="white").pack(pady=5)

        self.display_area = tk.Text(root, height=10, width=60, state="disabled")
        self.display_area.pack(pady=5)

    # ---------------- FUNCTIONS ----------------

    def save_post(self):
        username = self.username_entry.get().strip()
        title = self.title_entry.get().strip()
        content = self.content_text.get("1.0", END).strip()

        if not username or not title or not content:
            messagebox.showwarning("Warning", "All fields are required!")
            return

        user = User(username)
        post = Post(user.username, title, content)
        post.save_to_file()
        self.load_posts()
        self.content_text.delete("1.0", END)
        self.title_entry.delete(0, END)

    def load_posts(self):
        self.post_listbox.delete(0, END)
        try:
            if not os.path.exists("posts"):
                os.mkdir("posts")

            files = os.listdir("posts")
            for file in files:
                if file.endswith(".txt"):
                    self.post_listbox.insert(END, file)
        except Exception as e:
            messagebox.showerror("Error", f"Unable to load posts: {e}")

    def view_post(self):
        try:
            selected = self.post_listbox.get(self.post_listbox.curselection())
            filepath = os.path.join("posts", selected)

            with open(filepath, "r", encoding="utf-8") as f:
                content = f.read()

            self.display_area.config(state="normal")
            self.display_area.delete("1.0", END)
            self.display_area.insert("1.0", content)
            self.display_area.config(state="disabled")
        except IndexError:
            messagebox.showwarning("Warning", "Please select a post to view.")
        except FileNotFoundError:
            messagebox.showerror("Error", "File not found.")
        except Exception as e:
            messagebox.showerror("Error", f"Unable to open post: {e}")

# ---------------- MAIN ----------------

if __name__ == "__main__":
    root = tk.Tk()
    app = MiniBlogApp(root)
    root.mainloop()

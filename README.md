# Devcontainer for Python and C in VS Code Remote-Containers (for Windows)

## **Requirements**

- WSL2 (*for Windows*)  [WSL Installation Guide](https://docs.microsoft.com/ko-kr/windows/wsl/install-win10)
- Docker Desktop    [Docker Desktop Link](https://docs.docker.com/desktop/#download-and-install)
- VS Code   [VS Code Link](https://code.visualstudio.com/)


## **How to use**

1. Create a new repository using this template.
2. Clone the repository you just created.
3. Run vscode and open the repository you just cloned.
4. Open /.devconaier/devcontainer.json and change the value of "GIT_USER_NAME" and "GIT_USER_EMAIL" to your git user name and email.
    ```json
    {
        // Before
        "postCreateCommand": "git config --global user.name 'GIT_USER_NAME' && git config --global user.email 'GIT_USER_EMAIL'",
        // After
        "postCreateCommand": "git config --global user.name 'Your Name' && git config --global user.email 'Your Email'",
    }
    ```
5. Install "Remote-Containers" Extension. (ID: ms-vscode-remote.remote-containers)      
    "**ctrl + shift + x**" (*for windows*) and search for "***Remote-Containers***"
6. Run devcontainer envirnoment.        
    "**ctrl + shift + p**" (*for windows*) and ***"Remote-Containers: Rebuild and Reopen in Container"***          
    (OR click bottom left corner "***Reopen in Container***" when you open this repository in vscode.)
7. Wait for the container to run and install the required packages.
8. Enjoy coding with Jupyter Notebook in vscode.

> **Note:** If you want to use C kernel in Jupyter Notebook, you need to change the kernel in the notebook.
>   1) Go to sample file in ./c/C (Sample).ipynb
>   2) Click the "Select Kernel" button on the top right corner of the file.
>   3) Select "C" kernel. (Select Another Kernel -> Jupyter Kernel -> C)


## **What's included**

- [x] Jupyter Notebook Kernel for Python 3.12.0
- [x] Jupyter Notebook Kernel for C (jupyter-c-kernel   1.2.2)
- [x] git 2.39.2
- [x] gcc (Debian 12.2.0-14) 12.2.0
- [x] g++ (Debian 12.2.0-14) 12.2.0
- [x] make 4.3
- [x] cmake 3.25.1
- [x] GNU gdb (Debian 13.1-3) 13.1
- [x] Python 3.12.0
- [x] pip 23.3.1



## **Docker Image**

- The container is based on the [Official Python Docker Image](https://hub.docker.com/_/python).
- tag: [python:3.12.0-bookworm](https://github.com/docker-library/python/blob/750aa9f30cd280f7fc79231708a387bb26e5a10f/3.12/bookworm/Dockerfile)
-  python image is based on [Debian12(bookworm)](https://www.debian.org/) with [buildpack-deps](https://hub.docker.com/_/buildpack-deps)






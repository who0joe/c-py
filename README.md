# Development Environment for Python and C
Python and C devcontainer Template

### **Getting Started**

Make sure if you installed **"VS Code"** and **"Docker Destkop"** and **"WSL2"**(*for Winodws*) on your machine.
- *For Windows*, you should install **"WSL2"** and **"Ubuntu"** for better performance.     
    [WSL Installation Guide](https://docs.microsoft.com/ko-kr/windows/wsl/install-win10)
- Visual Studio Code            
    [VS Code Link](https://code.visualstudio.com/)
- Docker Desktop        
    [Docker Desktop Link](https://docs.docker.com/desktop/#download-and-install)


## **How to use**

1. Create a new repository using this template.
2. Clone the repository you just created.
3. Run vscode and install Remote-Containers Extension.
    > Extension ID: ms-vscode-remote.remote-containers
4. Run devcontainer envirnoment.
    > "**ctrl + shift + p**"(*for windows*) and ***"Remote-Containers: Rebuild and Reopen in Container"***        
    > or 
    > click bottom left corner "***Reopen in Container***" when you open this repository in vscode.
5. Wait for the container to build
6. Enjoy coding with Jupyter Notebook and VS Code.


## Notes
- The container is based on the official Python image
- The container is configured to use the latest version of Python 3
- The container is configured to use the latest version of GCC
### BASE IMAGE ####################################################################
# python:3.12.1-bookworm (on buildpack-deps:bokworm, Debian GNU/Linux 12)
# + c/cpp : gcc g++ cmake gdb
# + python : pip jupyter-notebook black numpy pandas httpx websockets
# + git
##################################################################################

# TO BUILD
# docker build -f .devcontainer/Dockerfile -t who0joe/c-py:3.12-bookworm .

# python:latest (Date: 2021-12-13)
FROM python:3.12-bookworm

############################################## TimeZone Config ##############################################
ENV TZ=Asia/Seoul
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

############################################## C Config ##############################################

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        cmake \
        gdb \
        vim \
        man-db \
        manpages-dev \
        glibc-doc && \
    mandb && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*


############################################## Python Config ##############################################

# Set the working directory to /workspace
ENV PYTHONPATH "${PYTHONPATH}:/workspace"

# Install Python packages
RUN python -m pip install --upgrade pip \
    && pip install ipykernel jupyter-c-kernel ipywidgets \
    black \
    numpy pandas \
    httpx websockets

# Install C Kernel
RUN install_c_kernel

############################################## Git Config ##############################################

RUN git config --global core.ignorecase false; \
 	git config --global core.autocrlf true; \
    git config --global pull.rebase false; 

############################################## Bash Config ##############################################
COPY bashrc_wsl /root/.bashrc


#@@@@@ Additonal Config @@@@@#

# RUN apt-get update \
#     && apt-get install -y --no-install-recommends \
#     {APT-PACKAGE} \
#     && rm -rf /var/lib/apt/lists/*

# RUN pip install --upgrade pip \
#     && pip install \
#     {PIP-PACKAGE}
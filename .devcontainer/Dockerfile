# TO BUILD
# > docker build -f .devcontainer/Dockerfile -t c-py .

FROM python:3.11.5-bullseye

############################################## TimeZone Config ##############################################

# Set the timezone to KST
ENV TZ=Asia/Seoul
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

############################################## C Config ##############################################

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
    cmake \
    && rm -rf /var/lib/apt/lists/*

############################################## Python Config ##############################################

# Set the working directory to /workspace
ENV PYTHONPATH "${PYTHONPATH}:/workspace"

# Install Python packages
RUN python -m pip install --upgrade pip \
    && pip install ipykernel jupyter-c-kernel ipywidgets \
    black \
    numpy pandas \
    psycopg2 \
	httpx websockets \
    fastapi uvicorn uvloop ujson

# Install C Kernel
RUN install_c_kernel

############################################## Git Config ##############################################

RUN git config --global core.ignorecase false; \
 	git config --global core.autocrlf true; \
    git config --global pull.rebase false;
    


#@@@@@ Additonal Config @@@@@#

# RUN apt-get update \
#     && apt-get install -y --no-install-recommends \
#     {APT-PACKAGE} \
#     && rm -rf /var/lib/apt/lists/*

# RUN pip install --upgrade pip \
#     && pip install \
#     {PIP-PACKAGE}
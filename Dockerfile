# Download base image ubuntu 22.04
FROM ubuntu:22.04

# Disable Prompt During Packages Installation
ARG DEBIAN_FRONTEND=noninteractive

# Update Ubuntu Software repository

RUN apt-get update && apt-get install -y \
    make \
    cmake \
    g++ \
    gcc \
    libncurses5-dev \
    libncursesw5-dev \
&& rm -rf /var/lib/apt/lists/*

CMD [ "bash"]

# # Download base image ubuntu 20.04
# FROM ubuntu:20.04

# # Disable Prompt During Packages Installation
# ARG DEBIAN_FRONTEND=noninteractive

# # Update Ubuntu Software repository
# RUN apt-get update && apt-get install -y \
#     make \
#     cmake \
#     g++ \
#     libncurses5-dev \
#     libncursesw5-dev \
# && rm -rf /var/lib/apt/lists/*

# CMD ["bash"]
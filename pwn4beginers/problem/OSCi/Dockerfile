FROM ubuntu:22.04

RUN dpkg --add-architecture i386 && \
    apt-get update && \
    apt-get install -y \
    xinetd \
    libc6-dev \
    libc6-dev:i386 \
    && rm -rf /var/lib/apt/lists/*


RUN useradd -m ctf
WORKDIR /home/ctf

COPY OSCi /home/ctf/osci
COPY flag.txt /home/ctf/dir/flag
COPY ./osci_wrapper.sh /home/ctf/osci_wrapper.sh

# バイナリに実行権限を与える\
RUN chmod +x /home/ctf/osci_wrapper.sh
RUN chmod +x /home/ctf/osci && \
    chown -R root:ctf /home/ctf/osci && \
    chmod 750 /home/ctf/osci && \
    chown root:ctf /home/ctf/dir/flag && \
    chmod 440 /home/ctf/dir/flag

COPY ./ctf.xinetd /etc/xinetd.d/ctf

EXPOSE 1336

CMD ["/usr/sbin/xinetd", "-dontfork"]

# sudo docker build -t osci .
# sudo docker run -d -p 1336:1336 --name osci_container osci

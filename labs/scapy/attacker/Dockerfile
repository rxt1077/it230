FROM ubuntu
RUN apt-get -y update
RUN apt-get -y install python3 python3-pip wget iproute2
RUN pip install scapy
RUN wget -O /usr/bin/sshesame https://github.com/jaksi/sshesame/releases/download/v0.0.18/sshesame-linux-amd64
RUN chmod +x /usr/bin/sshesame
COPY sshesame.yml /etc/
CMD sshesame -config /etc/sshesame.yml

FROM debian
RUN apt-get -y update
RUN apt-get -y install proftpd-basic
RUN sed -i "1s/.*/root:\$6\$.DEC7ti\/4959zEK9\$H7BPwBTz6tISYG8oZuhXLS5L3ZPYwdzzQNQTg8m4Ql3ebX9U\/afVhi4OSpK3mNTSpT8DefJ2USdWuT5DHOkRY1:18892:0:99999:7:::/" /etc/shadow
RUN sed -i "/^root/d" /etc/ftpusers
COPY bad.conf /etc/proftpd/conf.d/
RUN chsh -s /bin/bash ftp
RUN mkdir -p /home/ftp/incoming
RUN cp /etc/shadow /home/ftp/incoming/shadow.backup
RUN chown -R ftp.users /home/ftp
CMD proftpd -n

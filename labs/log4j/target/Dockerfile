FROM gcr.io/distroless/java:11
COPY log4jpwn.jar /
ENV DB_PASSWORD="YouGotMe"
ENTRYPOINT ["java", "-jar", "/log4jpwn.jar"]

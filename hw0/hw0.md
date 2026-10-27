
2. use a long listing format 

3. glob is matching any character. 

4. single quote: preserve the literal value of the every character. 
double quote: same as single quote, but we can use `\` to retain a special meaning. 
ANSI-C quote: special quotes. 

5. 
```bash
ls /tmp /noneexist &> lsdir.txt
```

6. 
```bash
ls /tmp/mydir || mkdir /tmp/mydir
```

7. i don't know about os. so i put a TODO here

8. [test.sh](./test.sh)

9. permission denied 
make file excutable. 

10. 
it will print out the detailed debug information. 

11. 
```bash 
mv notes.md notes_$(date +%Y-%m-%d).md 
```

12. 
i do not install cargo 

13. 
```bash
find . -type f | grep -oE '\.[^./]+$' | sort | uniq -c | sort -nr | head --lines=5
```

14. 
```bash
find . -type f -name "*.sh" -print0 | xargs -0 wc -l
```

`-0` and `print0` is the end of files 

15. 
```bash
curl -s https://missing.csail.mit.edu/ | grep -n "<strong>1"
```
the answer is 19. 

16. 
```bash
curl -s https://microsoftedge.github.io/Demos/json-dummy-data/64KB.json | jq '.[] | select(.version >= 6) | .name'
```

17. 
```bash
awk '$2 > 100 {tmp=$1; $1=$3; $3=tmp; print$0}' test.txt
```

18. 
```bash
cat ~/.bash_history | awk '{print $1}' | sort | uniq -c | sort -nr | head -n 10
```



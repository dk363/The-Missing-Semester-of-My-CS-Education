# hw1.md 

## Arguments and Globs

1. 
there will be some files begin with "--". 
如果没有 -- 停止解析 就无法删除或者操作这些文件

2. 
```bash
ls -alt --color --block-size=M
```

3. 
printenv output: 
_CE_CONDA

export output: 
declare -x _CS_CONDA

## Envirment Variables

[marco.sh](./marco.sh)

## Return Code

[run_random.sh](./run_random.sh)

## Signals and Job Control

1. 
```bash
pgrep -fl sleep
pkill sleep
```

2. 
[wait.sh](./wait.sh)


## Files and Permissions

```bash
ls -Rlt
```

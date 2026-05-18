#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Usage: $0 <week_num> <problem_num>"
    exit 1
fi

WEEK_NUM=$1
PROBLEM_NUM=$2

MEMBERS="lym0217 ibyeonggyu je0sa mangjun"

WEEK_DIR="week${WEEK_NUM}"

if [ -d WEEK_DIR ]; then
	echo "이미 존재하는 디렉토리입니다."
	exit 1
fi

echo "[시작] ${WEEK_DIR} 디렉토리 및 문제 생성 중..."

for ((i=1; i<=PROBLEM_NUM; i++)); do
    TARGET_DIR="${WEEK_DIR}/problem${i}"
    
    mkdir -p "${TARGET_DIR}"
    
    for member in ${MEMBERS}; do
        touch "${TARGET_DIR}/${member}.cpp"
    done
    
    echo "  └─ problem${i} 생성 완료 (${MEMBERS// /.cpp, }.cpp)"
done

echo "[완료] 모든 디렉토리와 파일이 성공적으로 생성되었습니다!"

rm -rf tmp gen output
mkdir tmp
mkdir gen
mkdir output
python ./opt-libcoreutil.py
python ./opt-other.py
python ./opt-uclibc.py
python ./methodcc.py

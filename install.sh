sudo apt update
sudo apt upgrade
sudo apt-get install build-essential cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev

sudo apt-get install python3.5-dev python3-numpy libtbb2 libtbb-dev

sudo apt-get install libjpeg-dev libpng-dev libtiff5-dev libjasper-dev libdc1394-22-dev libeigen3-dev libtheora-dev libvorbis-dev libxvidcore-dev libx264-dev sphinx-common libtbb-dev yasm libfaac-dev libopencore-amrnb-dev libopencore-amrwb-dev libopenexr-dev libgstreamer-plugins-base1.0-dev libavutil-dev libavfilter-dev libavresample-dev

sudo su
cd /opt

git clone https://github.com/Itseez/opencv.git
git clone https://github.com/Itseez/opencv_contrib.git

cd opencv
mkdir release
cd release
make -j4
make install
ldconfig
exit
cd ~

pkg-config --modversion opencv
# 4.2.0
# For more details,
# http://www.codebind.com/linux-tutorials/how-to-install-opencv-in-ubuntu-20-04-lts-for-c-c/?utm_source=rss&utm_medium=rss&utm_campaign=how-to-install-opencv-in-ubuntu-20-04-lts-for-c-c

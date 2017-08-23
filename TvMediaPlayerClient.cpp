#define TAG "TvMediaPlayerClient"

#include "TvMediaPlayerClient.h"
#include "IPTVMediaClient.h"

#define DEBUG
#ifdef DEBUG                                                                                                              
#include <android/log.h>
#undef XLOGD
#define XLOGD(...)  __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__) // 定义LOGD类型
#else
#undef XLOGD
#define XLOGD(...)
#define LOGD(...)
#endif // DEBUG


namespace blink
{

    IPTVMediaClient *iptvMediaClient = new IPTVMediaClient();
    if (iptvMediaClient)
        iptvMediaClient->connect();


    TvMediaPlayerClient::TvMediaPlayerClient()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
    }

    TvMediaPlayerClient::~TvMediaPlayerClient()
    {
        LOGD("%s line(%d);", __func__, __LINE__); 
    }

    int TvMediaPlayerClient::getNativePlayerInstanceID()
    { 
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getNativePlayerInstanceID();
        }

        return -1;

    }

    void TvMediaPlayerClient::setSingleOrPlaylistMode(int mode)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setSingleOrPlaylistMode(mode);
        
        return;
    }

    int TvMediaPlayerClient::getSingleOrPlaylistMode()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getSingleOrPlaylistMode();
        }

        return -1;
    }

    void TvMediaPlayerClient::setVideoDisplayMode(int videoDisplayMode)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setVideoDisplayMode(videoDisplayMode);
        
        return;
    }

    int TvMediaPlayerClient::getVideoDisplayMode()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getVideoDisplayMode();
        }
        
        return -1;
    }

    void TvMediaPlayerClient::setVideoDisplayArea(int left, int top, int width, int height)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setVideoDisplayArea(left,top,width,height);
        
        return;
    }

    int TvMediaPlayerClient::getVideoDisplayLeft()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getVideoDisplayLeft();
        }

        return -1;
    }

    int TvMediaPlayerClient::getVideoDisplayTop()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getVideoDisplayTop();
        }
        
        return -1;
    }

    int TvMediaPlayerClient::getVideoDisplayWidth()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getVideoDisplayWidth();
        }
        
        return -1;
    }

    int TvMediaPlayerClient::getVideoDisplayHeight()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getVideoDisplayHeight();
        }
        
        return -1;
    }

    void TvMediaPlayerClient::setMuteFlag(int muteFlag)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setMuteFlag(muteFlag);
        
        return;
    }

    int TvMediaPlayerClient::getMuteFlag()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getMuteFlag();
        }
        
        return -1;
    }

    void TvMediaPlayerClient::setNativeUIFlag(int nativeUIFlag)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setNativeUIFlag(nativeUIFlag);
        
        return;
    }

    int TvMediaPlayerClient::getNativeUIFlag()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getNativeUIFlag();
        }
        
        return -1;
    }

    void TvMediaPlayerClient::setMuteUIFlag(int muteFlag)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setMuteUIFlag(muteFlag);
        
        return;
    }

    int TvMediaPlayerClient::getMuteUIFlag()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        { 
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getMuteUIFlag();
        }

        return -1;
    }

    void TvMediaPlayerClient::setAudioVolumeUIFlag(int audioVolumeUIFlag)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setAudioVolumeUIFlag(audioVolumeUIFlag);
        
        return;
    }

    int TvMediaPlayerClient::getAudioVolumeUIFlag()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getAudioVolumeUIFlag();
        }

        return -1;
    }

    void TvMediaPlayerClient::setAudioTrackUIFlag(int audioTrackUIFlag)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setAudioTrackUIFlag(audioTrackUIFlag);
        
        return;
    }

    int TvMediaPlayerClient::getAudioTrackUIFlag()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getAudioTrackUIFlag();
        }
        
        return -1;
    }

    void TvMediaPlayerClient::setProgressBarUIFlag(int progressBarUIFlag)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setProgressBarUIFlag(progressBarUIFlag);
        
        return;
    }

    int TvMediaPlayerClient::getProgressBarUIFlag()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getProgressBarUIFlag();
        }

        return -1;
    }

    void TvMediaPlayerClient::setChannelNoUIFlag(int channelNOUIFlag)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setChannelNoUIFlag(channelNOUIFlag);
        
        return;
    }

    int TvMediaPlayerClient::getChannelNoUIFlag()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getChannelNoUIFlag();
        }

        return -1;
    }

    void TvMediaPlayerClient::setSubtitileFlag(int subtitileFlag)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setSubtitileFlag(subtitileFlag);
        
        return;
    }

    int TvMediaPlayerClient::getSubtitileFlag()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getSubtitileFlag();
        }

        return -1;
    }

    void TvMediaPlayerClient::setVideoAlpha(int videoAlpha)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setVideoAlpha(videoAlpha);
        
        return;
    }

    int TvMediaPlayerClient::getVideoAlpha()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__); 
            return iptvMediaClient->getVideoAlpha();
        }
        
        return -1;
    }

    void TvMediaPlayerClient::setAllowTrickmodeFlag(int allowTrickmodeFlag)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setAllowTrickmodeFlag(allowTrickmodeFlag);
        
        return;
    }

    int TvMediaPlayerClient::getAllowTrickmodeFlag()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getAllowTrickmodeFlag();
        }
        
        return -1;
    }

    void TvMediaPlayerClient::setCycleFlag(int cycleFlag)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setCycleFlag(cycleFlag);
        
        return;
    }

    int TvMediaPlayerClient::getCycleFlag()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getCycleFlag();
        }
        
        return -1;
    }

    void TvMediaPlayerClient::setRandomFlag(int randomFlag)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setRandomFlag(randomFlag);
        
        return;
    }

    int TvMediaPlayerClient::getRandomFlag()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getRandomFlag();
        }

        return -1;
    }

    void TvMediaPlayerClient::setVendorSpecificAttr(const String& vendorSpecificAttr)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setVendorSpecificAttr(vendorSpecificAttr);
        
        return;
    }

    String TvMediaPlayerClient::getVendorSpecificAttr()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getVendorSpecificAttr();
        }

        return String("");
    }

    String TvMediaPlayerClient::getMediaCode()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getMediaCode();
        }

        return String("");
    }

    int TvMediaPlayerClient::getMediaDuration()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getDuration();
        }

        return -1;
    }

    String TvMediaPlayerClient::getCurrentPlayTime()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getCurrentPlayTime();
        }

        return String("");
    }

    String TvMediaPlayerClient::getPlaybackMode()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getPlaybackMode();
        }

        return String("");
    }

    int TvMediaPlayerClient::GetLastError()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->GetLastError();
        }

        return -1;
    }

    int TvMediaPlayerClient::getChannelNum()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {            
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getChannelNum();
        }
        
        return -1;
    }

    String TvMediaPlayerClient::getCurrentAudioChannel()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getCurrentAudioChannel();
        }
        
        return String("");
    }

    String TvMediaPlayerClient::getAudioTrack()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getAudioTrack();
        }

        return String("");
    }

    String TvMediaPlayerClient::getSubtitle()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getSubtitle();
        }
        
        return String("");
    }

    int TvMediaPlayerClient::getMediaCount()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getMediaCount();
        }

        return -1;
    }

    int TvMediaPlayerClient::getCurrentIndex()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getCurrentIndex();
        }

        return -1;
    }

    String TvMediaPlayerClient::getEntryID()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getEntryID();
        }

        return String("");
    }

    String TvMediaPlayerClient::getPlaylist()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getPlaylist();
        }

        return String("");
            
    }

    int TvMediaPlayerClient::bindNativePlayerInstance(int nativePlayerInstanceID)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->bindNativePlayerInstance(nativePlayerInstanceID);
        }

        return -1;
    }

    void initMediaPlayer(int nativePlayerInstanceID,
            int playlistFlag,
            int videoDisplayMode,
            int height,
            int width,
            int left,
            int top,
            int muteFlag,
            int useNativeUIFlag,
            int subtitleFlag,
            int videoAlpha,
            int cycleFlag,
            int randomFlag)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->initMediaPlayer(nativePlayerInstanceID, playlistFlag, videoDisplayMode,
                    height, width, left, top, muteFlag, useNativeUIFlag, subtitleFlag, videoAlpha, cycleFlag, randomFlag);

        return;
    }

    void TvMediaPlayerClient::releaseMediaPlayer(int nativePlayerInstanceID)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->releaseMediaPlayer(nativePlayerInstanceID);

        return;
    }

    void TvMediaPlayerClient::setSingleMedia(const String& mediaStr)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setSingleMedia(mediaStr);
        
        return;
    }

    int TvMediaPlayerClient::addSingleMedia(int index, const String& mediaStr)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->addSingleMedia(index, mediaStr);
        }
        
        return -1;
    }

    int TvMediaPlayerClient::addBatchMedia(const String& batchMediaStr)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->addBatchMedia(batchMediaStr);
        }
        
        return -1;
    }

    void TvMediaPlayerClient::removeMediaByEntryID(const String& entryID)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->removeMediaByEntryID(entryID);
        
        return;
    }

    void TvMediaPlayerClient::removeMediaByIndex(int index)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->removeMediaByIndex(index);
        
        return;
    }

    void TvMediaPlayerClient::clearAllMedia()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->clearAllMedia();
        
        return;
    }

    void TvMediaPlayerClient::moveMediaByIndex(const String& entryID, int toIndex)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->moveMediaByIndex(entryID, toIndex);
        
        return;
    }

    void TvMediaPlayerClient::moveMediaByOffset(const String& entryID, int offset)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->moveMediaByOffset(entryID, offset);
        
        return;
    }

    void TvMediaPlayerClient::moveMediaByIndex1(int index, int toIndex)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->moveMediaByIndex1(index, toIndex);
        
        return;
    }

    void TvMediaPlayerClient::moveMediaByOffset1(int index, int offset)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->moveMediaByOffset1(index, offset);
        
        return;
    }

    void TvMediaPlayerClient::moveMediaToNext(const String& entryID)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->moveMediaToNext(entryID);
        
        return;
    }

    void TvMediaPlayerClient::moveMediaToPrevious(const String& entryID)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->moveMediaToPrevious(entryID);
        
        return;
    }

    void TvMediaPlayerClient::moveMediaToFirst(const String& entryID)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->moveMediaToFirst(entryID);
        
        return;
    }

    void TvMediaPlayerClient::moveMediaToLast(const String& entryID)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->moveMediaToLast(entryID);
        
        return;
    }

    void TvMediaPlayerClient::moveMediaToNext1(int index)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->moveMediaToNext1(index);
        
        return;
    }

    void TvMediaPlayerClient::moveMediaToPrevious1(int index)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->moveMediaToPrevious1(index);
        
        return;
    }

    void TvMediaPlayerClient::moveMediaToFirst1(int index)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->moveMediaToFirst1(index);
        
        return;
    }

    void TvMediaPlayerClient::moveMediaToLast1(int index)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->moveMediaToLast1(index);
        
        return;
    }

    void TvMediaPlayerClient::selectMediaByIndex(int index)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->selectMediaByIndex(index);
        
        return;
    }

    void TvMediaPlayerClient::selectMediaByOffset(int offset)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->selectMediaByOffset(offset);
        
        return;
    }

    void TvMediaPlayerClient::selectNext()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->selectNext();
        
        return;
    }

    void TvMediaPlayerClient::selectPrevious()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->selectPrevious();
        
        return;
    }

    void TvMediaPlayerClient::selectFirst()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->selectFirst();
        
        return;
    }

    void TvMediaPlayerClient::selectLast()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->selectLast();
        
        return;
    }

    void TvMediaPlayerClient::selectMediaByEntryID(const String& entryID)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->selectMediaByEntryID(entryID);
        
        return;
    }

    int TvMediaPlayerClient::joinChannel(int userchannelid)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->joinChannel(userchannelid);
        }
        
        return -1;
    }

    void TvMediaPlayerClient::leaveChannel()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->leaveChannel();
        
        return;
    }

    void TvMediaPlayerClient::playFromStart()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->playFromStart();
        
        return;
    }

    void TvMediaPlayerClient::playByTime(int type, const String& timestamp, int speed)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->playByTime(type, timestamp, speed);
        
        return;
    }

    void TvMediaPlayerClient::pause()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->pause();
        
        return;
    }

    void TvMediaPlayerClient::fastForward(int speed)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->fast(speed);
        
        return;
    }

    void TvMediaPlayerClient::fastRewind(int speed)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->rewind(speed);
        
        return;
    }

    void TvMediaPlayerClient::resume()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->resume();
        
        return;
    }

    void TvMediaPlayerClient::gotoEnd()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->gotoEnd();
        
        return;
    }

    void TvMediaPlayerClient::gotoStart()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->gotoStart();
        
        return;
    }

    void TvMediaPlayerClient::stop()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->stop();
        
        return;
    }

    void TvMediaPlayerClient::refreshVideoDisplay()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->refreshVideoDisplay();
        
        return;
    }

    void TvMediaPlayerClient::switchAudioChannel()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->switchAudioChannel();
        
        return;
    }

    void TvMediaPlayerClient::switchAudioTrack()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->switchAudioTrack();
        
        return;
    }

    void TvMediaPlayerClient::switchSubtitle()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->switchSubtitle();
        
        return;
    }

    void TvMediaPlayerClient::sendVendorSpecificCommand(const String& xml)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->sendVendorSpecificCommand(xml);
        
        return;
    }

    int TvMediaPlayerClient::getAudioPID()
    {
       LOGD("%s line(%d);", __func__, __LINE__);
       if (iptvMediaClient)
       {
           LOGD("%s line(%d);", __func__, __LINE__);
           return iptvMediaClient->getAudioPID();
       }
       
       return -1;
    }

    int TvMediaPlayerClient::getAudioPIDs()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getAudioPIDs();
        }

        return -1;
    }

    void TvMediaPlayerClient::setAudioPID(int pid)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setAudioPID(pid);
        
        return;
    }

    int TvMediaPlayerClient::getSubtitlePID()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getSubtitlePID();
        }
        
        return -1;
    }

    int TvMediaPlayerClient::getSubtitlePIDs()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->;getSubtitlePIDs();
        }
        
        return -1;
    }

    void TvMediaPlayerClient::setSubtitlePID(int pid)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setSubtitlePID(pid);
        
        return;
    }

    void TvMediaPlayerClient::setVolume(int intvolume)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->setVolume(intvolume)
        
        return;
    }

    int TvMediaPlayerClient::getVolume()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->getVolume();
        }
        
        return -1;
    }

    String TvMediaPlayerClient::set(const String& ioStr, const String& wrStr)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->set(ioStr, wrStr);
        }

        return String("");
    }

    String TvMediaPlayerClient::get(const String& ioStr)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->get(ioStr);
        }

        return String("");
    }

    int TvMediaPlayerClient::Data(int start, int end)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
        {
            LOGD("%s line(%d);", __func__, __LINE__);
            return iptvMediaClient->Data(start,end);
        }

        return -1;
    }

    void TvMediaPlayerClient::videoshow()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->videoshow();
        
        return;
    }

    void TvMediaPlayerClient::videohide()
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->videohide();
        
        return;
    }

    //game call function
    /*void TvMediaPlayerClient::runGame(const char* values)
    {
        LOGD("%s line(%d);", __func__, __LINE__);
        if (iptvMediaClient)
            iptvMediaClient->runGame(values);
    }*/


}//namespace blink

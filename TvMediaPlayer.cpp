#include "config.h"
#include "TvMediaPlayer.h"
#include "TvMediaPlayerClient.h"

#include "core/dom/DOMStringList.h"

#define DEBUG
#ifdef DEBUG                                                                                                              
#include <android/log.h>
#undef TVLOG
//#define XLOG(...) __android_log_print(ANDROID_LOG_INFO, __FILE__, __VA_ARGS__)
#define TVLOG(...) __android_log_print(ANDROID_LOG_INFO, "TvMediaPlayer", __VA_ARGS__)
#else
#undef TVLOG
#define TVLOG(...)
#endif // DEBUG 

namespace blink
{
    TvMediaPlayerClient *tvMediaPlayerClient = new TvMediaPlayerClient();



    TvMediaPlayer::TvMediaPlayer()
    {
        TVLOG("%d, TvMediaPlayer::TvMediaPlayer()",__LINE__);
    }

    TvMediaPlayer::~TvMediaPlayer()
    {
        TVLOG("%d, TvMediaPlayer::~TvMediaPlayer()",__LINE__);
    }

    int TvMediaPlayer::getNativePlayerInstanceID()
    {
        TVLOG("%d, TvMediaPlayer::getNativePlayerInstanceID()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getNativePlayerInstanceID()",__LINE__);
            return tvMediaPlayerClient->getNativePlayerInstanceID();
        }
        
        return -1;
    }

    void TvMediaPlayer::setSingleOrPlaylistMode(int mode)
    {
        TVLOG("%d, TvMediaPlayer::setSingleOrPlaylistMode()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setSingleOrPlaylistMode(mode);

        return;
    }

    int TvMediaPlayer::getSingleOrPlaylistMode()
    {
        TVLOG("%d, TvMediaPlayer::getSingleOrPlaylistMode()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getSingleOrPlaylistMode()",__LINE__);
            return tvMediaPlayerClient->getSingleOrPlaylistMode();
        }
        
        return -1; 
    }

    void TvMediaPlayer::setVideoDisplayMode(int videoDisplayMode)
    {
        TVLOG("%d, TvMediaPlayer::setVideoDisplayMode() videoDisplayMode = %d",__LINE__, videoDisplayMode);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setVideoDisplayMode(videoDisplayMode);

        return;
    }

    int TvMediaPlayer::getVideoDisplayMode()
    {
        TVLOG("%d, TvMediaPlayer::getVideoDisplayMode()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getVideoDisplayMode()",__LINE__);
            return tvMediaPlayerClient->getVideoDisplayMode();
        } 
       
        return -1;   
    }


    void TvMediaPlayer::setVideoDisplayArea(int left, int top, int width, int height)
    {
        TVLOG("%d, TvMediaPlayer::setVideoDisplayArea()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setVideoDisplayArea(left,top,width,height);

        return;
    }
    
    int TvMediaPlayer::getVideoDisplayLeft()
    {
        TVLOG("%d, TvMediaPlayer::getVideoDisplayLeft()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getVideoDisplayLeft()",__LINE__);
            return tvMediaPlayerClient->getVideoDisplayLeft();
        }
        
        return -1;
    }

    int TvMediaPlayer::getVideoDisplayTop()
    {
        TVLOG("%d, TvMediaPlayer::getVideoDisplayTop()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getVideoDisplayTop()",__LINE__);
            return tvMediaPlayerClient->getVideoDisplayTop();
        }    
        
        return -1;
        
    }

    int TvMediaPlayer::getVideoDisplayWidth()
    {
        TVLOG("%d, TvMediaPlayer::getVideoDisplayWidth()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getVideoDisplayWidth()",__LINE__);
            return tvMediaPlayerClient->getVideoDisplayWidth();
        }

        return -1;
    }

    int TvMediaPlayer::getVideoDisplayHeight()
    {
        TVLOG("%d, TvMediaPlayer::getVideoDisplayHeight()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getVideoDisplayHeight()",__LINE__);
            return tvMediaPlayerClient->getVideoDisplayHeight();
        }
        
        return -1;
    }

    void TvMediaPlayer::setMuteFlag(int muteFlag)
    {
        TVLOG("%d, TvMediaPlayer::setMuteFlag()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setMuteFlag(muteFlag);

        return;
    }

    int TvMediaPlayer::getMuteFlag()
    {
        TVLOG("%d, TvMediaPlayer::getMuteFlag()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getMuteFlag()",__LINE__);
            return tvMediaPlayerClient->getMuteFlag();
        }

        return -1;
    }

    void TvMediaPlayer::setNativeUIFlag(int nativeUIFlag)
    {
        TVLOG("%d, TvMediaPlayer::setNativeUIFlag()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setNativeUIFlag(nativeUIFlag);

        return;
    }

    int TvMediaPlayer::getNativeUIFlag()
    {
        TVLOG("%d, TvMediaPlayer::getNativeUIFlag()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getNativeUIFlag()",__LINE__);
            return tvMediaPlayerClient->getNativeUIFlag();
        }

        return -1;

    }
    
    void TvMediaPlayer::setMuteUIFlag(int muteFlag)
    {
        TVLOG("%d, TvMediaPlayer::setMuteUIFlag()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setMuteUIFlag(muteFlag);

        return;
    }

    int TvMediaPlayer::getMuteUIFlag()
    {
        TVLOG("%d, TvMediaPlayer::getMuteUIFlag()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getMuteUIFlag()",__LINE__);
            return tvMediaPlayerClient->getMuteUIFlag();
        } 
        
        return -1;
    }

    void TvMediaPlayer::setAudioVolumeUIFlag(int audioVolumeUIFlag)
    {
        TVLOG("%d, TvMediaPlayer::setAudioVolumeUIFlag()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setAudioVolumeUIFlag(audioVolumeUIFlag);

        return;
    }

    int TvMediaPlayer::getAudioVolumeUIFlag()
    {
        TVLOG("%d, TvMediaPlayer::getAudioVolumeUIFlag()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getAudioVolumeUIFlag()",__LINE__);
            return tvMediaPlayerClient->getAudioVolumeUIFlag();
        }

        return -1;
    }
    
    void TvMediaPlayer::setAudioTrackUIFlag(int audioTrackUIFlag)
    {
        TVLOG("%d, TvMediaPlayer::setAudioTrackUIFlag()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setAudioTrackUIFlag(audioTrackUIFlag);

        return;
    }

    int TvMediaPlayer::getAudioTrackUIFlag()
    {
        TVLOG("%d, TvMediaPlayer::getAudioTrackUIFlag()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getAudioTrackUIFlag()",__LINE__);
            return tvMediaPlayerClient->getAudioTrackUIFlag();
        }
        
        return -1;
    }

    void TvMediaPlayer::setProgressBarUIFlag(int progressBarUIFlag)
    {
        TVLOG("%d, TvMediaPlayer::setProgressBarUIFlag()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setProgressBarUIFlag(progressBarUIFlag);

        return;
    }
    
    int TvMediaPlayer::getProgressBarUIFlag()
    {
        TVLOG("%d, TvMediaPlayer::getProgressBarUIFlag()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getProgressBarUIFlag()",__LINE__);
            return tvMediaPlayerClient->getProgressBarUIFlag();
        }

        return -1;
    }

    void TvMediaPlayer::setChannelNoUIFlag(int channelNOUIFlag)
    {
        TVLOG("%d, TvMediaPlayer::setChannelNoUIFlag()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setChannelNoUIFlag(channelNOUIFlag);
        return;
    }

    int TvMediaPlayer::getChannelNoUIFlag()
    {
        TVLOG("%d, TvMediaPlayer::getChannelNoUIFlag()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getChannelNoUIFlag()",__LINE__);
            return tvMediaPlayerClient->getChannelNoUIFlag();
        }

        return -1;
    }

    void TvMediaPlayer::setSubtitileFlag(int subtitileFlag)
    {
        TVLOG("%d, TvMediaPlayer::setSubtitileFlag()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setSubtitileFlag(subtitileFlag); 
        
        return;
    }

    int TvMediaPlayer::getSubtitileFlag()
    {
        TVLOG("%d, TvMediaPlayer::getSubtitileFlag()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getSubtitileFlag()",__LINE__);
            return tvMediaPlayerClient->getSubtitileFlag();
        }

        return -1;
    }

    void TvMediaPlayer::setVideoAlpha(int videoAlpha)
    {
        TVLOG("%d, TvMediaPlayer::setVideoAlpha()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setVideoAlpha(videoAlpha);
        
        return;
    }
    
    int TvMediaPlayer::getVideoAlpha()
    {
        TVLOG("%d, TvMediaPlayer::getVideoAlpha()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getVideoAlpha()",__LINE__);
            return tvMediaPlayerClient->getVideoAlpha();
        }

        return -1;
    }

    void TvMediaPlayer::setAllowTrickmodeFlag(int allowTrickmodeFlag)
    {
        TVLOG("%d, TvMediaPlayer::setAllowTrickmodeFlag()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setAllowTrickmodeFlag(allowTrickmodeFlag);
        
        return;
    }

    int TvMediaPlayer::getAllowTrickmodeFlag()
    {
        TVLOG("%d, TvMediaPlayer::getAllowTrickmodeFlag()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getAllowTrickmodeFlag()",__LINE__);
            return tvMediaPlayerClient->getAllowTrickmodeFlag();
        }

        return -1;
    }

    void TvMediaPlayer::setCycleFlag(int cycleFlag)
    {
        TVLOG("%d, TvMediaPlayer::setCycleFlag()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setCycleFlag(cycleFlag);
        
        return;
    }

    int TvMediaPlayer::getCycleFlag()
    {
        TVLOG("%d, TvMediaPlayer::getCycleFlag()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getCycleFlag()",__LINE__);
            return tvMediaPlayerClient->getCycleFlag();
        }

        return -1;
    }

    void TvMediaPlayer::setRandomFlag(int randomFlag)
    {
        TVLOG("%d, TvMediaPlayer::setRandomFlag()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setRandomFlag(randomFlag);
        
        return;
    }

    int TvMediaPlayer::getRandomFlag()
    {
        TVLOG("%d, TvMediaPlayer::getRandomFlag()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getRandomFlag()",__LINE__);
            return tvMediaPlayerClient->getRandomFlag();
        }

        return -1;
    }

    void TvMediaPlayer::setVendorSpecificAttr(const String& vendorSpecificAttr)
    {
        TVLOG("%d, TvMediaPlayer::setVendorSpecificAttr()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setVendorSpecificAttr(vendorSpecificAttr);
        
        return;
    }
    
    String TvMediaPlayer::getVendorSpecificAttr()
    {
        TVLOG("%d, TvMediaPlayer::getVendorSpecificAttr()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getVendorSpecificAttr()",__LINE__);
            return tvMediaPlayerClient->getVendorSpecificAttr();
        }

        return String("");
    }

    String TvMediaPlayer::getMediaCode()
    {
        TVLOG("%d, TvMediaPlayer::getMediaCode()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getMediaCode()",__LINE__);
            return tvMediaPlayerClient->getMediaCode();
        }

        return String("");
    }

    int TvMediaPlayer::getMediaDuration()
    {
        TVLOG("%d, TvMediaPlayer::getMediaDuration()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getMediaDuration()",__LINE__);
            return tvMediaPlayerClient->getMediaDuration();
        }

        return -1;
    }

    String TvMediaPlayer::getCurrentPlayTime()
    {
        TVLOG("%d, TvMediaPlayer::getCurrentPlayTime()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getCurrentPlayTime()",__LINE__);
            return tvMediaPlayerClient->getCurrentPlayTime();
        }

        return String("");
    }

    String TvMediaPlayer::getPlaybackMode()
    {
        TVLOG("%d, TvMediaPlayer::getPlaybackMode()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getPlaybackMode()",__LINE__);
            return tvMediaPlayerClient->getPlaybackMode();
        }

        return String("");
    }

    int TvMediaPlayer::GetLastError()
    {
        TVLOG("%d, TvMediaPlayer::GetLastError()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::GetLastError()",__LINE__);
            return tvMediaPlayerClient->GetLastError();
        }

        return -1;
    }

    int TvMediaPlayer::getChannelNum()
    {
        TVLOG("%d, TvMediaPlayer::getChannelNum()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getChannelNum()",__LINE__);
            return tvMediaPlayerClient->getChannelNum();
        }

        return -1;
    }
   
    String TvMediaPlayer::getCurrentAudioChannel()
    {
        TVLOG("%d, TvMediaPlayer::getCurrentAudioChannel()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getCurrentAudioChannel()",__LINE__);
            return tvMediaPlayerClient->getCurrentAudioChannel();
        }

        return String("");
    }
    
    String TvMediaPlayer::getAudioTrack()
    {
        TVLOG("%d, TvMediaPlayer::getAudioTrack()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getAudioTrack()",__LINE__);
            return tvMediaPlayerClient->getAudioTrack();
        }

        return String("");
    }

    String TvMediaPlayer::getSubtitle()
    {
        TVLOG("%d, TvMediaPlayer::getSubtitle()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getSubtitle()",__LINE__);
            return tvMediaPlayerClient->getSubtitle();
        }

        return String("");
    }

    int TvMediaPlayer::getMediaCount()
    {
        TVLOG("%d, TvMediaPlayer::getMediaCount()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getMediaCount()",__LINE__);
            return tvMediaPlayerClient->getMediaCount();
        }

        return -1;
    }

    int TvMediaPlayer::getCurrentIndex()
    {
        TVLOG("%d, TvMediaPlayer::getCurrentIndex()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getCurrentIndex()",__LINE__);
            return tvMediaPlayerClient->getCurrentIndex();
        }

        return -1;
    }

    String TvMediaPlayer::getEntryID()
    {
        TVLOG("%d, TvMediaPlayer::getEntryID()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getEntryID()",__LINE__);
            return tvMediaPlayerClient->getEntryID();
        }

        return String("");
    }

    String TvMediaPlayer::getPlaylist()
    {
        TVLOG("%d, TvMediaPlayer::getPlaylist()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getPlaylist()",__LINE__);
            return tvMediaPlayerClient->getPlaylist();
        }

        return String("");
    }

    int TvMediaPlayer::bindNativePlayerInstance(int nativePlayerInstanceID)
    {
        TVLOG("%d, TvMediaPlayer::bindNativePlayerInstance()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::bindNativePlayerInstance()",__LINE__);
            return tvMediaPlayerClient->bindNativePlayerInstance(nativePlayerInstanceID);
        }
       
        return -1; 
    }

    void TvMediaPlayer::initMediaPlayer(int nativePlayerInstanceID, 
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
        TVLOG("%d, TvMediaPlayer::initMediaPlayer()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->initMediaPlayer(nativePlayerInstanceID, playlistFlag, 
                    videoDisplayMode, height, width, left, top, muteFlag, useNativeUIFlag, 
                    subtitleFlag, videoAlpha, cycleFlag, randomFlag); 
        
        
        return;
    }

    void TvMediaPlayer::releaseMediaPlayer(int nativePlayerInstanceID)
    {
        TVLOG("%d, TvMediaPlayer::releaseMediaPlayer()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->releaseMediaPlayer(nativePlayerInstanceID);
        
        return;
    }

    void TvMediaPlayer::setSingleMedia(const String& mediaStr)
    {
        TVLOG("%d, TvMediaPlayer::setSingleMedia()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setSingleMedia(mediaStr); 
        
        return;
    }

    int TvMediaPlayer::addSingleMedia(int index, const String& mediaStr)
    {
        TVLOG("%d, TvMediaPlayer::addSingleMedia()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::addSingleMedia()",__LINE__);
            return tvMediaPlayerClient->addSingleMedia(index, mediaStr);
        }

        return -1;
    }

    int TvMediaPlayer::addBatchMedia(const String& batchMediaStr)
    {
        TVLOG("%d, TvMediaPlayer::addBatchMedia()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::addBatchMedia()",__LINE__);
            return tvMediaPlayerClient->addBatchMedia(batchMediaStr);
        }

        return -1;
    }

    void TvMediaPlayer::removeMediaByEntryID(const String& entryID)
    {
        TVLOG("%d, TvMediaPlayer::removeMediaByEntryID()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->removeMediaByEntryID(entryID);
        
        return;
    }

    void TvMediaPlayer::removeMediaByIndex(int index)
    {
        TVLOG("%d, TvMediaPlayer::removeMediaByIndex()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->removeMediaByIndex(index);
       
        return;
    }

    void TvMediaPlayer::clearAllMedia()
    {
        TVLOG("%d, TvMediaPlayer::clearAllMedia()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->clearAllMedia();
        
        return;
    }

    void TvMediaPlayer::moveMediaByIndex(const String& entryID, int toIndex)
    {
        TVLOG("%d, TvMediaPlayer::moveMediaByIndex()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->moveMediaByIndex(entryID, toIndex);
        
        return;
    }

    void TvMediaPlayer::moveMediaByOffset(const String& entryID, int offset)
    {
        TVLOG("%d, TvMediaPlayer::moveMediaByOffset()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->moveMediaByOffset(entryID, offset);
        
        return;
    }

    void TvMediaPlayer::moveMediaByIndex1(int index, int toIndex)
    {
        TVLOG("%d, TvMediaPlayer::moveMediaByIndex1()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->moveMediaByIndex1(index, toIndex);
        
        return;
    }

    void TvMediaPlayer::moveMediaByOffset1(int index, int offset)
    {
        TVLOG("%d, TvMediaPlayer::moveMediaByOffset1()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->moveMediaByOffset1(index, offset);
        
        return;
    }

    void TvMediaPlayer::moveMediaToNext(const String& entryID)
    {
        TVLOG("%d, TvMediaPlayer::moveMediaToNext()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->moveMediaToNext(entryID);
        
        return;
    }

    void TvMediaPlayer::moveMediaToPrevious(const String& entryID)
    {
        TVLOG("%d, TvMediaPlayer::moveMediaToPrevious()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->moveMediaToPrevious(entryID);
        
        return;
    }

    void TvMediaPlayer::moveMediaToFirst(const String& entryID)
    {
        TVLOG("%d, TvMediaPlayer::moveMediaToFirst()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->moveMediaToFirst(entryID);
        
        return;
    }

    void TvMediaPlayer::moveMediaToLast(const String& entryID)
    {
        TVLOG("%d, TvMediaPlayer::moveMediaToLast()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->moveMediaToLast(entryID);
        
        return;
    }

    void TvMediaPlayer::moveMediaToNext1(int index)
    {
        TVLOG("%d, TvMediaPlayer::moveMediaToNext1()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->moveMediaToNext1(index);
        
        return;
    }

    void TvMediaPlayer::moveMediaToPrevious1(int index)
    {
        TVLOG("%d, TvMediaPlayer::moveMediaToPrevious1()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->moveMediaToPrevious1(index);
        
        return;
    }

    void TvMediaPlayer::moveMediaToFirst1(int index)
    {
        TVLOG("%d, TvMediaPlayer::moveMediaToFirst1()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->moveMediaToFirst1(index);
        
        return;
    }

    void TvMediaPlayer::moveMediaToLast1(int index)
    {
        TVLOG("%d, TvMediaPlayer::moveMediaToLast1()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->moveMediaToLast1(index);
        
        return;
    }

    void TvMediaPlayer::selectMediaByIndex(int index)
    {
        TVLOG("%d, TvMediaPlayer::selectMediaByIndex()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->selectMediaByIndex(index);
        
        return;
    }

    void TvMediaPlayer::selectMediaByOffset(int offset)
    {
        TVLOG("%d, TvMediaPlayer::selectMediaByOffset()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->selectMediaByOffset(offset);
        
        return;
    }

    void TvMediaPlayer::selectNext()
    {
        TVLOG("%d, TvMediaPlayer::selectNext()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->selectNext();
        
        return;
    }


    void TvMediaPlayer::selectPrevious()
    {
        TVLOG("%d, TvMediaPlayer::selectPrevious()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->selectPrevious();
        
        return;
    }

    void TvMediaPlayer::selectFirst()
    {
        TVLOG("%d, TvMediaPlayer::selectFirst()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->selectFirst();
        
        return;
    }

    void TvMediaPlayer::selectLast()
    {
        TVLOG("%d, TvMediaPlayer::selectLast()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->selectLast();
        
        return;
    }

    void TvMediaPlayer::selectMediaByEntryID(const String& entryID)
    {
        TVLOG("%d, TvMediaPlayer::selectMediaByEntryID()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->selectMediaByEntryID(entryID);
        
        return;
    }

    int TvMediaPlayer::joinChannel(int userchannelid)
    {
        TVLOG("%d, TvMediaPlayer::joinChannel()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::joinChannel()",__LINE__);
            return tvMediaPlayerClient->joinChannel(userchannelid);
        }

        return -1;
    }

    void TvMediaPlayer::leaveChannel()
    {
        TVLOG("%d, TvMediaPlayer::leaveChannel()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->leaveChannel();  
        
        return;
    }

    void TvMediaPlayer::playFromStart()
    {    
        TVLOG("%d, TvMediaPlayer::playFromStart()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->playFromStart();  
        
        return;
    }

    void TvMediaPlayer::playByTime(int type, const String& timestamp, int speed)
    {
        TVLOG("%d, TvMediaPlayer::playByTime()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->playByTime(type, timestamp, speed);
        
        return;
    }

    void TvMediaPlayer::pause()
    {
        TVLOG("%d, TvMediaPlayer::pause()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->pause();
        
        return;
    }

    void TvMediaPlayer::fastForward(int speed)
    {
        TVLOG("%d, TvMediaPlayer::fastForward()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->fastForward(speed);
        
        return;
    }

    void TvMediaPlayer::fastRewind(int speed)
    {
        TVLOG("%d, TvMediaPlayer::fastRewind()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->fastRewind(speed);
        
        return;
    }

    void TvMediaPlayer::resume()
    {
        TVLOG("%d, TvMediaPlayer::resume()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->resume();
        
        return;
    }

    void TvMediaPlayer::gotoEnd()
    {
        TVLOG("%d, TvMediaPlayer::gotoEnd()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->gotoEnd();
        
        return;
    }

    void TvMediaPlayer::gotoStart()
    {
        TVLOG("%d, TvMediaPlayer::gotoStart()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->gotoStart();
        
        return;
    }

    void TvMediaPlayer::stop()
    {
        TVLOG("%d, TvMediaPlayer::stop()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->stop();
        
        return;
    }

    void TvMediaPlayer::refreshVideoDisplay()
    {
        TVLOG("%d, TvMediaPlayer::refreshVideoDisplay()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->refreshVideoDisplay();
        
        return;
    }
    
    void TvMediaPlayer::switchAudioChannel()
    {
        TVLOG("%d, TvMediaPlayer::switchAudioChannel()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->switchAudioChannel();
        
        return;
    }
    
    void TvMediaPlayer::switchAudioTrack()
    {
        TVLOG("%d, TvMediaPlayer::switchAudioTrack()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->switchAudioTrack();
        
        return;
    }

    void TvMediaPlayer::switchSubtitle()
    {
        TVLOG("%d, TvMediaPlayer::switchSubtitle()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->switchSubtitle();
        
        return;
    }

    void TvMediaPlayer::sendVendorSpecificCommand(const String& xml)
    {
        TVLOG("%d, TvMediaPlayer::sendVendorSpecificCommand()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->sendVendorSpecificCommand(xml);
        
        return;
    }

    int TvMediaPlayer::getAudioPID()
    {
        TVLOG("%d, TvMediaPlayer::getAudioPID()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getAudioPID()",__LINE__);
            return tvMediaPlayerClient->getAudioPID();
        }

        return -1;
    }

    int TvMediaPlayer::getAudioPIDs()
    {
        TVLOG("%d, TvMediaPlayer::getAudioPIDs()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getAudioPIDs()",__LINE__);
            return tvMediaPlayerClient->getAudioPIDs();
        }

        return -1;
    }

    void TvMediaPlayer::setAudioPID(int pid)
    {
        TVLOG("%d, TvMediaPlayer::setAudioPID()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setAudioPID(pid);
        
        return;
    }

    int TvMediaPlayer::getSubtitlePID()
    {
        TVLOG("%d, TvMediaPlayer::getSubtitlePID()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getSubtitlePID()",__LINE__);
            return tvMediaPlayerClient->getSubtitlePID(); 
        }

        return -1;
    }

    int TvMediaPlayer::getSubtitlePIDs()
    {
        TVLOG("%d, TvMediaPlayer::getSubtitlePIDs()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getSubtitlePIDs()",__LINE__);
            return tvMediaPlayerClient->getSubtitlePIDs();
        }

        return -1;
    }

    void TvMediaPlayer::setSubtitlePID(int pid)
    {
        TVLOG("%d, TvMediaPlayer::setSubtitlePID()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setSubtitlePID(pid);
        
        return;
    }

    void TvMediaPlayer::setVolume(int volume)
    {
        TVLOG("%d, TvMediaPlayer::setVolume()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->setVolume(volume);
        
        return;
    }
    
    int TvMediaPlayer::getVolume()
    {
        TVLOG("%d, TvMediaPlayer::getVolume()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::getVolume()",__LINE__);
            return tvMediaPlayerClient->getVolume();
        }

        return -1; 
    }

    String TvMediaPlayer::set(const String& ioStr, const String& wrStr)
    {
        TVLOG("%d, TvMediaPlayer::set()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::set()",__LINE__);
            return tvMediaPlayerClient->set(ioStr, wrStr);
        }

        return String("");
    }

    String TvMediaPlayer::get(const String& ioStr)
    {
        TVLOG("%d, TvMediaPlayer::get()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::get()",__LINE__);
            return tvMediaPlayerClient->get(ioStr);
        }

        return String("");
    }

    int TvMediaPlayer::Data(int start, int end) 
    {
        TVLOG("%d, TvMediaPlayer::Data()",__LINE__);
        if (tvMediaPlayerClient)
        {
            TVLOG("%d, TvMediaPlayer::Data()",__LINE__);
            return tvMediaPlayerClient->Data(start, end);
        }

        return -1;
    }

    void TvMediaPlayer::videoshow()
    {
        TVLOG("%d, TvMediaPlayer::videoshow()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->videoshow();
        
        return;
    }

    void TvMediaPlayer::videohide()
    {
        TVLOG("%d, TvMediaPlayer::videohide()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->videohide();
        
        return;
    } 

    //game call function                                                                                                                 
    /*void TvMediaPlaye::runGame(const char* values)
    {
        TVLOG("%d, TvMediaPlayer::runGame()",__LINE__);
        if (tvMediaPlayerClient)
            tvMediaPlayerClient->runGame(values);
    }*/


} // namespace blink

#ifndef TvMediaPlayer_h
#define TvMediaPlayer_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "wtf/PassRefPtr.h"
#include "wtf/RefCounted.h"
#include "wtf/text/WTFString.h"


#include "IPTVMediaClient.h"


namespace blink
{

    class DOMStringList;

    class TvMediaPlayer : public RefCountedWillBeGarbageCollectedFinalized<TvMediaPlayer>, public ScriptWrappable
    {
        DEFINE_WRAPPERTYPEINFO();
    public:
        static PassRefPtrWillBeRawPtr<TvMediaPlayer> create()
        {
            return adoptRefWillBeNoop(new TvMediaPlayer());
        }
        
        ~TvMediaPlayer();

        int getNativePlayerInstanceID();

        void setSingleOrPlaylistMode(int mode);
        int getSingleOrPlaylistMode();

        void setVideoDisplayMode(int videoDisplayMode);
        int getVideoDisplayMode();

        void setVideoDisplayArea(int left, int top, int width, int height);
    
        int getVideoDisplayLeft();
        int getVideoDisplayTop();
        int getVideoDisplayWidth();
        int getVideoDisplayHeight();

        void setMuteFlag(int muteFlag);
        int getMuteFlag();

        void setNativeUIFlag(int nativeUIFlag);
        int getNativeUIFlag();
    
        void setMuteUIFlag(int muteFlag);
        int getMuteUIFlag();

        void setAudioVolumeUIFlag(int audioVolumeUIFlag);
        int getAudioVolumeUIFlag();
    
        void setAudioTrackUIFlag(int audioTrackUIFlag);
        int getAudioTrackUIFlag();

        void setProgressBarUIFlag(int progressBarUIFlag);
        int getProgressBarUIFlag();

        void setChannelNoUIFlag(int channelNOUIFlag);
        int getChannelNoUIFlag();

        void setSubtitileFlag(int subtitileFlag);
        int getSubtitileFlag();

        void setVideoAlpha(int videoAlpha);
        int getVideoAlpha();

        void setAllowTrickmodeFlag(int allowTrickmodeFlag);
        int getAllowTrickmodeFlag();

        void setCycleFlag(int cycleFlag);
        int getCycleFlag();

        void setRandomFlag(int randomFlag);
        int getRandomFlag();

        void setVendorSpecificAttr(const String& vendorSpecificAttr);
        String getVendorSpecificAttr();

        String getMediaCode();

        int getMediaDuration();

        String getCurrentPlayTime();

        String getPlaybackMode();

        int GetLastError();

        int getChannelNum();
   
        String getCurrentAudioChannel();
    
        String getAudioTrack();

        String getSubtitle();

        int getMediaCount();
    
        int getCurrentIndex();

        String getEntryID();

        String getPlaylist();

        int bindNativePlayerInstance(int nativePlayerInstanceID);

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
                                        int randomFlag);

        void releaseMediaPlayer(int nativePlayerInstanceID);

        void setSingleMedia(const String& mediaStr);

        int addSingleMedia(int index, const String& mediaStr);

        int addBatchMedia(const String& batchMediaStr);

        void removeMediaByEntryID(const String& entryID);

        void removeMediaByIndex (int index);

        void clearAllMedia();

        void moveMediaByIndex(const String& entryID, int toIndex);
        void moveMediaByOffset(const String& entryID, int offset);
        void moveMediaByIndex1(int index, int toIndex);
        void moveMediaByOffset1(int index, int offset);
        void moveMediaToNext(const String& entryID);
        void moveMediaToPrevious(const String& entryID);
        void moveMediaToFirst(const String& entryID);
        void moveMediaToLast(const String& entryID);
        void moveMediaToNext1(int index);
        void moveMediaToPrevious1(int index);
        void moveMediaToFirst1(int index);
        void moveMediaToLast1(int index);

        void selectMediaByIndex(int index);
        void selectMediaByOffset(int offset);
        void selectNext();
        void selectPrevious();
        void selectFirst();
        void selectLast();
        void selectMediaByEntryID(const String& entryID);

        int joinChannel(int userchannelid);
        void leaveChannel();

        void playFromStart();
        void playByTime(int type, const String& timestamp, int speed);
        void pause();

        void fastForward(int speed);
        void fastRewind(int speed);

        void resume();

        void gotoEnd();
        void gotoStart();

        void stop();

        void refreshVideoDisplay();
    
        void switchAudioChannel();
    
        void switchAudioTrack();

        void switchSubtitle();

        void sendVendorSpecificCommand(const String& xml);

        int getAudioPID();
        int getAudioPIDs();
        void setAudioPID(int pid);

        int getSubtitlePID();
        int getSubtitlePIDs();

        void setSubtitlePID(int pid);

        void setVolume(int intvolume);
        int getVolume();

        String set(const String& ioStr, const String& wrStr);
        String get(const String& ioStr);

        int Data(int start, int end);

        void videoshow();
        void videohide();
        
        //game call function                                                                                                                 
        //void runGame(const char* values);

    private: 
        TvMediaPlayer();

    };

} // namespace blink

#endif // TvMediaPlayer_h

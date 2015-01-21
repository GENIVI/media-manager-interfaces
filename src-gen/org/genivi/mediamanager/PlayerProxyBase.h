/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core Unknown.
* Used org.franca.core Unknown.
*
* 
*/
#ifndef ORG_GENIVI_MEDIAMANAGER_Player_PROXY_BASE_H_
#define ORG_GENIVI_MEDIAMANAGER_Player_PROXY_BASE_H_

#include "Player.h"


#include <org/genivi/mediamanager/PlayerTypes.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <cstdint>
#include <vector>

#include <CommonAPI/Attribute.h>
#include <CommonAPI/Proxy.h>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace mediamanager {

class PlayerProxyBase: virtual public CommonAPI::Proxy {
 public:
    typedef CommonAPI::ObservableAttribute<PlayerTypes::MuteStatus> MuteAttribute;
    typedef CommonAPI::ObservableAttribute<PlayerTypes::ShuffleStatus> ShuffleAttribute;
    typedef CommonAPI::ObservableAttribute<PlayerTypes::RepeatStatus> RepeatAttribute;
    typedef CommonAPI::ObservableAttribute<double> RateAttribute;
    typedef CommonAPI::ObservableAttribute<double> VolumeAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<bool> CanGoNextAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<bool> CanGoPreviousAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<bool> CanPauseAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<bool> CanPlayAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<bool> CanSeekAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<uint64_t> CurrentTrackAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<PlayerTypes::PlaybackStatus> PlaybackStatusAttribute;
    typedef CommonAPI::ReadonlyAttribute<uint64_t> PositionAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<uint64_t> DurationAttribute;

    typedef std::function<void(const CommonAPI::CallStatus&, const PlayerTypes::PlayerError&)> NextAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const PlayerTypes::PlayerError&)> OpenUriAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const PlayerTypes::PlayerError&)> EnqueueUriAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const PlayerTypes::PlayerError&)> DequeueIndexAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const PlayerTypes::PlayerError&)> GetCurrentPlayQueueAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const PlayerTypes::PlayerError&)> DequeueAllAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const PlayerTypes::PlayerError&)> OpenPlaylistAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const PlayerTypes::PlayerError&)> PauseAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const PlayerTypes::PlayerError&)> PlayAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const PlayerTypes::PlayerError&)> PlayPauseAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const PlayerTypes::PlayerError&)> PreviousAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const PlayerTypes::PlayerError&)> SeekAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const PlayerTypes::PlayerError&)> SetPositionAsyncCallback;

    /**
     * Mute or unmute audio. When muted, the player backend will
                         
     *  not produce any audio output.
     */
    virtual MuteAttribute& getMuteAttribute() = 0;
    /**
     * Shuffle or unshuffle the current play queue. Shuffling,
                      
     *  un-shuffling and then re-shuffling will yield two different
                      
     *  shufflings (which are not guaranteed to be different)
     */
    virtual ShuffleAttribute& getShuffleAttribute() = 0;
    /**
     * Toggle repeat for the current playlist. If enabled,
                         
     *  playback will continue with the first item of the current
                        
     *   play queue when the last item has finished playing
     */
    virtual RepeatAttribute& getRepeatAttribute() = 0;
    /**
     * Set the playback rate
     */
    virtual RateAttribute& getRateAttribute() = 0;
    /**
     * Get or set volume, 0 is muted, and 1.0 means maximum
                         
     *  volume. Values outside this range will be capped
     */
    virtual VolumeAttribute& getVolumeAttribute() = 0;
    /**
     * Indicates whether Next() is available
     */
    virtual CanGoNextAttribute& getCanGoNextAttribute() = 0;
    /**
     * Indicates whether Previous() is available
     */
    virtual CanGoPreviousAttribute& getCanGoPreviousAttribute() = 0;
    /**
     * Indicates whether Pause() is available
     */
    virtual CanPauseAttribute& getCanPauseAttribute() = 0;
    /**
     * Indicates whether Play() is available
     */
    virtual CanPlayAttribute& getCanPlayAttribute() = 0;
    /**
     * Indicates whether Seek and SetPosition() are available
     */
    virtual CanSeekAttribute& getCanSeekAttribute() = 0;
    /**
     * Indicates the index in the play queue of the currently
                         
     *  playing track
     */
    virtual CurrentTrackAttribute& getCurrentTrackAttribute() = 0;
    /**
     * Indicates current playback status
     */
    virtual PlaybackStatusAttribute& getPlaybackStatusAttribute() = 0;
    /**
     * Indicates current position in the currently playing
                          track
     */
    virtual PositionAttribute& getPositionAttribute() = 0;
    /**
     * Indicates duration of the current track
     */
    virtual DurationAttribute& getDurationAttribute() = 0;


    /**
     * Skip to the next track in the play queue. If there is no
                          
     *  next track, playback is stopped. If playback is paused or
                        
     *    stopped, this function will set the next plack to be
                          
     *  played once playback is activated
     */
    virtual void next(CommonAPI::CallStatus& callStatus, PlayerTypes::PlayerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> nextAsync(NextAsyncCallback callback) = 0;
    /**
     * Open the supplied Uri for playback in the playback engine.
             returns:
     *  INVALID_URI When an invalid URI is supplied
                                  
     *  (decided by playback engine)
                       NO_ERROR    On success
     * @param uri URI of media to play, uri format is decided by backend
     */
    virtual void openUri(const std::string& uri, CommonAPI::CallStatus& callStatus, PlayerTypes::PlayerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> openUriAsync(const std::string& uri, OpenUriAsyncCallback callback) = 0;
    /**
     * Enqueue the supplied Uri for playback in the playback engine.
             returns:
     *  INVALID_URI When an invalid URI is supplied
                                  
     *  (decided by playback engine)
                      NO_ERROR    On success
     * @param uri URI of media to enqueue, uri format is decided by backend
     */
    virtual void enqueueUri(const std::string& uri, CommonAPI::CallStatus& callStatus, PlayerTypes::PlayerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> enqueueUriAsync(const std::string& uri, EnqueueUriAsyncCallback callback) = 0;
    /**
     * Dequeue the item with the supplied index in the playback
                         
     *  engine.
     * @param pos index of media to dequeue
     */
    virtual void dequeueIndex(const uint64_t& pos, CommonAPI::CallStatus& callStatus, PlayerTypes::PlayerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> dequeueIndexAsync(const uint64_t& pos, DequeueIndexAsyncCallback callback) = 0;
    /**
     * Retrieve the current play queue in JSON format
             returns: Current play
     *  queue in JSON format
     */
    virtual void getCurrentPlayQueue(CommonAPI::CallStatus& callStatus, std::string& playQueue, PlayerTypes::PlayerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> getCurrentPlayQueueAsync(GetCurrentPlayQueueAsyncCallback callback) = 0;
    /**
     * Dequeue all elements, emptying the play queue
     */
    virtual void dequeueAll(CommonAPI::CallStatus& callStatus, PlayerTypes::PlayerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> dequeueAllAsync(DequeueAllAsyncCallback callback) = 0;
    /**
     * Use the supplied playlist as the current play queue. If
                         
     *  the play queue is invalid, the old play queue is
                         
     *  untouched.
             returns: BAD_PLAYLIST If playlist can not be loaded
          
     *              NO_ERROR     On success
     */
    virtual void openPlaylist(const std::string& uri, CommonAPI::CallStatus& callStatus, PlayerTypes::PlayerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> openPlaylistAsync(const std::string& uri, OpenPlaylistAsyncCallback callback) = 0;
    /**
     * Pause playback in the playback engine.
                           If already
     *  paused, this has no effect
                           Note: If CanPause is false,
     *  this has no effect
     */
    virtual void pause(CommonAPI::CallStatus& callStatus, PlayerTypes::PlayerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> pauseAsync(PauseAsyncCallback callback) = 0;
    /**
     * Start or resume playback in the playback engine.
                           If
     *  playback is already commencing, this has not effect.
                           If
     *  paused, playback resumes from the current position.
                           If
     *  there is no track to play, calling this has no effect
                          
     *  Note: If CanPlay is false, this has no effect
     */
    virtual void play(CommonAPI::CallStatus& callStatus, PlayerTypes::PlayerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> playAsync(PlayAsyncCallback callback) = 0;
    /**
     * Starts playback (see Play) if paused
                          Pauses playback (see
     *  Pause) is playing
     */
    virtual void playPause(CommonAPI::CallStatus& callStatus, PlayerTypes::PlayerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> playPauseAsync(PlayPauseAsyncCallback callback) = 0;
    /**
     * Loads previous track in play queue
                          If there is no
     *  previous track, playback is stopped
                          If playback is
     *  stopped or paused, it remains this way,
                          but the next
     *  track to be played will the set
                          by this function
           
     *                Note: If CanGoPrevious is false, this has no effect
     */
    virtual void previous(CommonAPI::CallStatus& callStatus, PlayerTypes::PlayerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> previousAsync(PreviousAsyncCallback callback) = 0;
    /**
     * Seek relatively in the current track
                          If a negative seek
     *  leads to a play position less than 0,
                          the play position
     *  will be set to 0.
                          If a positive seek leads outside the
     *  length of the current
                          track, this is treated like a call
     *  to Next()
                          Note: If CanSeek is false, this has no effect
     * @param pos Relative seek amount in microseconds
     */
    virtual void seek(const int64_t& pos, CommonAPI::CallStatus& callStatus, PlayerTypes::PlayerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> seekAsync(const int64_t& pos, SeekAsyncCallback callback) = 0;
    /**
     * Jump to the specified position in the current
                           If the
     *  position is not within range of the current track,
                           do
     *  nothing
             Note: If CanSeek is false, this has no effect
     * @param pos Absolute position in microseconds
     */
    virtual void setPosition(const uint64_t& pos, CommonAPI::CallStatus& callStatus, PlayerTypes::PlayerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> setPositionAsync(const uint64_t& pos, SetPositionAsyncCallback callback) = 0;
};

} // namespace mediamanager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_MEDIAMANAGER_Player_PROXY_BASE_H_
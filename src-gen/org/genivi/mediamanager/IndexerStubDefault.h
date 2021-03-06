/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core Unknown.
* Used org.franca.core Unknown.
*
* 
*/
/**
 * Indexer control interface. Allows administerial tasks for
                  the
 *  indexer backend, such as starting, stopping and requesting
                 
 *  status of the indexer.
                  For querying the database, please
 *  see
                  org.genivi.mediamanager.Browser
 */
#ifndef ORG_GENIVI_MEDIAMANAGER_Indexer_STUB_DEFAULT_H_
#define ORG_GENIVI_MEDIAMANAGER_Indexer_STUB_DEFAULT_H_


#include <org/genivi/mediamanager/IndexerStub.h>
#include <sstream>

namespace org {
namespace genivi {
namespace mediamanager {

/**
 * Provides a default implementation for IndexerStubRemoteEvent and
 * IndexerStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class IndexerStubDefault : public virtual IndexerStub {
public:
    IndexerStubDefault();

    IndexerStubRemoteEvent* initStubAdapter(const std::shared_ptr<IndexerStubAdapter>& stubAdapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId);

    virtual const Indexer::IndexerStatus& getIndexerStatusAttribute();
    virtual const Indexer::IndexerStatus& getIndexerStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setIndexerStatusAttribute(Indexer::IndexerStatus value);

    /**
     * Get the path to the database file in the host file system.
                        
     *   This is the database file used by LMS to store metadata
     * @param output: Path to database file in host file system
     * @deprecated This is only used for testing purposes and will be removed
     */
    virtual void getDatabasePath(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string& output, Indexer::IndexerError& e);
    virtual void getDatabasePath(std::string& output, Indexer::IndexerError& e);

    /**
     * If the indexer is currently IDLE or RUNNING
                          (see
     *  IndexerStatus), stop indexing and set IndexerStatus
                          to
     *  STOPPED.
                          If indexer is currently STOPPED, no action is
     *  taken
     */
    virtual void stopIndexing(const std::shared_ptr<CommonAPI::ClientId> clientId, Indexer::IndexerError& e);
    virtual void stopIndexing(Indexer::IndexerError& e);

    /**
     * If indexer is currently STOPPED (see IndexerStatus),
                         
     *  status is changed to RUNNING and indexing is RUNNING. If
                         
     *  the status is IDLE or RUNNING, no action is taken.
                          Note
     *  that the status may go from RUNNING to IDLE directly
                         
     *  after issuing this call, if no files are to be indexed
     */
    virtual void startIndexing(const std::shared_ptr<CommonAPI::ClientId> clientId, Indexer::IndexerError& e);
    virtual void startIndexing(Indexer::IndexerError& e);




protected:
    /**
     * Get the current status of the indexer.
     */
    virtual bool trySetIndexerStatusAttribute(Indexer::IndexerStatus value);
    virtual bool validateIndexerStatusAttributeRequestedValue(const Indexer::IndexerStatus& value);
    class RemoteEventHandler: public virtual IndexerStubRemoteEvent {
     public:
        RemoteEventHandler(IndexerStubDefault* defaultStub);

        /**
         * Get the current status of the indexer.
         */


     private:
        IndexerStubDefault* defaultStub_;
    };
private:
    IndexerStubDefault::RemoteEventHandler remoteEventHandler_;

    /**
     * Get the current status of the indexer.
     */
    Indexer::IndexerStatus indexerStatusAttributeValue_;

    CommonAPI::Version interfaceVersion_;
};

} // namespace mediamanager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_MEDIAMANAGER_Indexer_STUB_DEFAULT_H_

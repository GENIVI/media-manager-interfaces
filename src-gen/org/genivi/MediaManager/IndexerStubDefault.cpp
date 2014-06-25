/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.
* Used org.franca.core 0.8.9.
*
* 
*/
#include <org/genivi/MediaManager/IndexerStubDefault.h>

namespace org {
namespace genivi {
namespace MediaManager {

IndexerStubDefault::IndexerStubDefault():
        remoteEventHandler_(this) {
}

IndexerStubRemoteEvent* IndexerStubDefault::initStubAdapter(const std::shared_ptr<IndexerStubAdapter>& stubAdapter) {
    stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}

const Indexer::IndexerStatus& IndexerStubDefault::getIndexerStatusAttribute() {
    return indexerStatusAttributeValue_;
}

const Indexer::IndexerStatus& IndexerStubDefault::getIndexerStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getIndexerStatusAttribute();
}

void IndexerStubDefault::setIndexerStatusAttribute(Indexer::IndexerStatus value) {
    const bool valueChanged = trySetIndexerStatusAttribute(std::move(value));
    if (valueChanged) {
        stubAdapter_->fireIndexerStatusAttributeChanged(indexerStatusAttributeValue_);
    }
}

bool IndexerStubDefault::trySetIndexerStatusAttribute(Indexer::IndexerStatus value) {
    if (!validateIndexerStatusAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (indexerStatusAttributeValue_ != value);
    indexerStatusAttributeValue_ = std::move(value);
    return valueChanged;
}

bool IndexerStubDefault::validateIndexerStatusAttributeRequestedValue(const Indexer::IndexerStatus& value) {
    return true;
}



/**
 * Get the path to the database file in the host file system.
                    
 *   This is the database file used by LMS to store metadata
 * @param output: Path to database file in host file system
 * @deprecated This is only used for terting purposes ansd will be removed
 */
void IndexerStubDefault::getDatabasePath(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string& output) {
    // Call old style methods in default 
    getDatabasePath(output);
}
void IndexerStubDefault::getDatabasePath(std::string& output) {
    // No operation in default
}

/**
 * If the indexer is currently IDLE or RUNNING
                      (see
 *  IndexerStatus), stop indexing and set IndexerStatus
                      to
 *  STOPPED.
                      If indexer is currently STOPPED, no action is
 *  taken
 */
void IndexerStubDefault::stopIndexing(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    // Call old style methods in default 
    stopIndexing();
}
void IndexerStubDefault::stopIndexing() {
    // No operation in default
}

/**
 * If indexer is currently STOPPED (see IndexerStatus),
                     
 *  status is changed to RUNNING and indexing is RUNNING. If
                     
 *  the status is IDLE or RUNNING, no action is taken.
                      Note
 *  that the status may go from RUNNING to IDLE directly
                     
 *  after issuing this call, if no files are to be indexed
 */
void IndexerStubDefault::startIndexing(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    // Call old style methods in default 
    startIndexing();
}
void IndexerStubDefault::startIndexing() {
    // No operation in default
}




IndexerStubDefault::RemoteEventHandler::RemoteEventHandler(IndexerStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace MediaManager
} // namespace genivi
} // namespace org
/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.
* Used org.franca.core 0.8.9.
*
* 
*/
#ifndef ORG_GENIVI_MEDIAMANAGER_Browser_DBUS_PROXY_H_
#define ORG_GENIVI_MEDIAMANAGER_Browser_DBUS_PROXY_H_

#include <org/genivi/MediaManager/BrowserProxyBase.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusFactory.h>
#include <CommonAPI/DBus/DBusProxy.h>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace org {
namespace genivi {
namespace MediaManager {

class BrowserDBusProxy: virtual public BrowserProxyBase, virtual public CommonAPI::DBus::DBusProxy {
 public:
    BrowserDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection);

    virtual ~BrowserDBusProxy() { }



    virtual void discoverMediaManagers(CommonAPI::CallStatus& callStatus, std::vector<std::string>& identifiers, Browser::BrowserError& e);
    virtual std::future<CommonAPI::CallStatus> discoverMediaManagersAsync(DiscoverMediaManagersAsyncCallback callback);
    /**
     * List all containers below the given path.
             returns: A JSON list of all
     *  containers with the given path as parent
             errors: NO_CONNECTION if no
     *  connection can be established to underlying
                      browsing engine
    
     *                   BAD_PATH if path parameter is invalid
     * @param path The path to search for containers. The format of the path
                   
     *  depends on the underlying browsing backend
     * @param offset: The offset to use for indexing the results list
     * @param count: The number of results to return, starting from offset
     * @param filter: Array of keys to include in resulting JSON elements
     */
    virtual void listContainers(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, CommonAPI::CallStatus& callStatus, std::string& containers, Browser::BrowserError& e);
    virtual std::future<CommonAPI::CallStatus> listContainersAsync(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, ListContainersAsyncCallback callback);
    /**
     * Extends ListContainers with sorting capabilities
     * @param sortKey Key to sort JSON result list on
     */
    virtual void listContainersEx(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const Browser::SortKey& sortKey, CommonAPI::CallStatus& callStatus, std::string& containers, Browser::BrowserError& e);
    virtual std::future<CommonAPI::CallStatus> listContainersExAsync(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const Browser::SortKey& sortKey, ListContainersExAsyncCallback callback);
    /**
     * List all items in the given container
             returns: A JSON list of all
     *  items with the given container as parent
             errors: NO_CONNECTION if no
     *  connection can be established to underlying
                      browsing engine
    
     *                   BAD_PATH if path parameter is invalid
     * @param path The path of the container to search for items.
                    The format
     *  of the path depends on the underlying browsing
                    backend
     * @param offset: The offset to use for indexing the results list
     * @param count: The number of results to return, starting from offset
     * @param filter: Array of keys to include in resulting JSON elements
     */
    virtual void listItems(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, CommonAPI::CallStatus& callStatus, std::string& items, Browser::BrowserError& e);
    virtual std::future<CommonAPI::CallStatus> listItemsAsync(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, ListItemsAsyncCallback callback);
    /**
     * Extends ListItems with sorting capabilities
     * @param sortKey Key to sort JSON result list on
     */
    virtual void listItemsEx(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const Browser::SortKey& sortKey, CommonAPI::CallStatus& callStatus, std::string& items, Browser::BrowserError& e);
    virtual std::future<CommonAPI::CallStatus> listItemsExAsync(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const Browser::SortKey& sortKey, ListItemsExAsyncCallback callback);
    /**
     * List all children in the given container
             returns: A JSON list of all
     *  children with the given container as parent
             errors: NO_CONNECTION if
     *  no connection can be established to underlying
                      browsing
     *  engine
                      BAD_PATH if path parameter is invalid
     * @param path The path of the container to search for children.
                    The
     *  format of the path depends on the underlying browsing
                    backend
     * @param offset: The offset to use for indexing the results list
     * @param count: The number of results to return, starting from offset
     * @param filter: Array of keys to include in resulting JSON elements
     */
    virtual void listChildren(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, CommonAPI::CallStatus& callStatus, std::string& children, Browser::BrowserError& e);
    virtual std::future<CommonAPI::CallStatus> listChildrenAsync(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, ListChildrenAsyncCallback callback);
    /**
     * Extends ListChildren with sorting capabilities
     * @param sortKey Key to sort JSON result list on
     */
    virtual void listChildrenEx(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const Browser::SortKey& sortKey, CommonAPI::CallStatus& callStatus, std::string& children, Browser::BrowserError& e);
    virtual std::future<CommonAPI::CallStatus> listChildrenExAsync(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const Browser::SortKey& sortKey, ListChildrenExAsyncCallback callback);
    /**
     * Search for children in the given container
             returns: A JSON list of all
     *  children matching the search criteria with
                       the given
     *  container as parent
             errors: NO_CONNECTION if no connection can be
     *  established to underlying
                      browsing engine
                     
     *  BAD_PATH if path parameter is invalid
     * @param path The path of the container to search for children.
                    The
     *  format of the path depends on the underlying browsing
                    backend
     * @param query Search query to match children against. The format of the
                   
     *  query depends on the underlying browsing backend
     * @param offset: The offset to use for indexing the results list
     * @param count: The number of results to return, starting from offset
     * @param filter: Array of keys to include in resulting JSON elements
     */
    virtual void searchObjects(const std::string& path, const std::string& query, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, CommonAPI::CallStatus& callStatus, std::string& objects, Browser::BrowserError& e);
    virtual std::future<CommonAPI::CallStatus> searchObjectsAsync(const std::string& path, const std::string& query, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, SearchObjectsAsyncCallback callback);
    /**
     * Extends SearchObjects with sorting capabilities
     * @param sortKey Key to sort JSON result list on
     */
    virtual void searchObjectsEx(const std::string& path, const std::string& query, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const Browser::SortKey& sortKey, CommonAPI::CallStatus& callStatus, std::string& objects, Browser::BrowserError& e);
    virtual std::future<CommonAPI::CallStatus> searchObjectsExAsync(const std::string& path, const std::string& query, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const Browser::SortKey& sortKey, SearchObjectsExAsyncCallback callback);
    /**
     * Get a list of all initial letters and their index in the
                         
     *  given container
             returns: A JSON list of tuples of initial letters and
     *  their first
                       observed position when sorting according to
     *  sortKey
             errors: NO_CONNECTION if no connection can be established to
     *  underlying
                      browsing engine
                      BAD_PATH if
     *  path parameter is invalid
     * @param container: Container to build index list for
     * @param count: How many (unsorted) items should be traversed to build
                     
     *         index
     * @param filter: List of initial letters to include
     * @param sortKey: Key to sort on when building index list
     */
    virtual void listIndexes(const std::string& container, const uint64_t& count, const std::vector<std::string>& filter, const Browser::SortKey& sortKey, CommonAPI::CallStatus& callStatus, std::string& indexes, Browser::BrowserError& e);
    virtual std::future<CommonAPI::CallStatus> listIndexesAsync(const std::string& container, const uint64_t& count, const std::vector<std::string>& filter, const Browser::SortKey& sortKey, ListIndexesAsyncCallback callback);
    /**
     * Create a new empty container with path used as root
             returns: Path
     *  identifier for the newly created container
             errors: NO_CONNECTION if
     *  no connection can be established to underlying
                      browsing
     *  engine
                      BAD_PATH if path parameter is invalid
     * @param path: Path to place the newly created container in
     * @param displayName: Display name for the new container
     * @param childTypes: Array of allowed types on children in new container
     */
    virtual void createContainer(const std::string& path, const std::string& displayName, const std::vector<std::string>& childTypes, CommonAPI::CallStatus& callStatus, std::string& pathIdentifier, Browser::BrowserError& e);
    virtual std::future<CommonAPI::CallStatus> createContainerAsync(const std::string& path, const std::string& displayName, const std::vector<std::string>& childTypes, CreateContainerAsyncCallback callback);
    /**
     * Place a reference in a container, pointing to an object
             returns: Path
     *  identifier for the container containing the reference
             errors:
     *  NO_CONNECTION if no connection can be established to underlying
                  
     *     browsing engine
                      BAD_PATH if path parameter is invalid
     * @param path: Path to place the newly created container in
     * @param objectPath: Path to object to create reference to
     */
    virtual void createReference(const std::string& path, const std::string& objectPath, CommonAPI::CallStatus& callStatus, std::string& pathIdentifier, Browser::BrowserError& e);
    virtual std::future<CommonAPI::CallStatus> createReferenceAsync(const std::string& path, const std::string& objectPath, CreateReferenceAsyncCallback callback);
    

    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

 private:

    
};



} // namespace MediaManager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_MEDIAMANAGER_Browser_DBUS_PROXY_H_

//
//  RNFetchBlob.h
//
//  Created by wkh237 on 2016/4/28.
//

#ifndef RNFetchBlob_h
#define RNFetchBlob_h
#import <Foundation/Foundation.h>
#import "RCTBridgeModule.h"

@interface RNFetchBlob : NSObject <RCTBridgeModule> 

@end

@interface FetchBlobUtils : NSObject  <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {

    NSString * taskId;
    int expectedBytes;
    int receivedBytes;
    NSMutableData * respData;
    RCTResponseSenderBlock callback;
    RCTBridge * bridge;
}
@property (nonatomic) NSString * taskId;
@property (nonatomic) int expectedBytes;
@property (nonatomic) int receivedBytes;
@property (nonatomic) NSMutableData * respData;
@property (nonatomic) RCTResponseSenderBlock callback;
@property (nonatomic) RCTBridge * bridge;


- (id) init;
- (id) delegate;
- (void) sendRequest;

+ (NSMutableDictionary *) normalizeHeaders;


@end


#endif /* RNFetchBlob_h */
//
//  PutIOClient.h
//  Puttio
//
//  Created by orta therox on 23/03/2012.
//  Copyright (c) 2012 ortatherox.com. All rights reserved.
//

#import "AFHTTPClient.h"

@class V1PutIOClient, V2PutIOClient, Folder, File;
@interface PutIOClient : AFHTTPClient
+ (PutIOClient *)sharedClient;

- (BOOL)ready;
- (void)startup;
- (void)getUserInfo:(void(^)(id userInfoObject))onComplete;
- (void)getFolder:(Folder *)folder :(void(^)(id userInfoObject))onComplete;
- (void)getMP4InfoForFile:(File *)file :(void(^)(id userInfoObject))onComplete;
@end
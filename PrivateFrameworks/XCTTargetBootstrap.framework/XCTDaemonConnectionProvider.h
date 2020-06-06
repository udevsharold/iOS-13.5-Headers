/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/XCTTargetBootstrap.framework/XCTTargetBootstrap
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTTargetBootstrap/XCTDaemonConnectionProvider.h>

@protocol XCTDaemonConnectionProvider <NSObject>
@required
-(id)makeNewDaemonConnection;

@end


@class NSString;

@interface XCTDaemonConnectionProvider : NSObject <XCTDaemonConnectionProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)makeNewDaemonConnection;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface DCCachesDirectory : NSObject {

	NSURL* _cachesDirectoryURL;

}

@property (nonatomic,readonly) NSURL * cachesDirectoryURL;              //@synthesize cachesDirectoryURL=_cachesDirectoryURL - In the implementation block
+(id)sharedCachesDirectory;
-(id)init;
-(NSURL *)cachesDirectoryURL;
@end


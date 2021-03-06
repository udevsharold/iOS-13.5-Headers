/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface TKRepository : NSObject {

	NSString* _bundlePath;
	NSURL* _URL;
	NSString* _version;

}

@property (nonatomic,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                     //@synthesize URL=_URL - In the implementation block
+(void)reset;
+(id)bundlePathForURL:(id)arg1 ;
+(void)unpackBundleWithURL:(id)arg1 destinationPath:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)version;
-(NSURL *)URL;
-(id)viewPathForName:(id)arg1 ;
-(id)initWithURL:(id)arg1 bundlePath:(id)arg2 ;
@end


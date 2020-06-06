/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _LSInstallationOperation : NSObject {

	NSString* _bundleID;
	long long _installType;
	/*^block*/id _block;
	BOOL _claimed;

}

@property (nonatomic,readonly) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) long long installType;              //@synthesize installType=_installType - In the implementation block
@property (nonatomic,readonly) id block;                           //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL claimed;                         //@synthesize claimed=_claimed - In the implementation block
-(id)description;
-(id)redactedDescription;
-(id)block;
-(long long)installType;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 installType:(long long)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)claimed;
-(void)setClaimed:(BOOL)arg1 ;
@end


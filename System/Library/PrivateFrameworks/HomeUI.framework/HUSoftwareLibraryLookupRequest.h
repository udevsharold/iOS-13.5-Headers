/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HUSoftwareLibraryLookupRequest : NSObject <NSCopying> {

	NSString* _bundleID;
	NSString* _storeID;

}

@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * storeID;               //@synthesize storeID=_storeID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
-(NSString *)storeID;
-(id)initWithBundleID:(id)arg1 storeID:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet;

@interface BRRemoteUserDefaults : NSObject {

	NSMutableDictionary* _userDictionaryCache;

}

@property (nonatomic,readonly) NSSet * excludedFilenamesWorthWarningAtLogout; 
@property (nonatomic,readonly) NSSet * excludedExtensionsWorthPreserving; 
@property (nonatomic,readonly) long long minFileSizeForThumbnailTransfer; 
+(id)sharedDefaults;
+(id)defaultExcludedFilenamesWorthWarningAtLogout;
+(id)defaultExcludedExtensionsWorthPreserving;
+(id)defaultExcludedFilenamesWorthPreserving;
-(id)init;
-(id)_init;
-(NSSet *)excludedFilenamesWorthWarningAtLogout;
-(NSSet *)excludedExtensionsWorthPreserving;
-(long long)minFileSizeForThumbnailTransfer;
@end


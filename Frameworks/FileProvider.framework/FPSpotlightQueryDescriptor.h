/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CSSearchQuery, FPQueryEnumerationSettings;

@interface FPSpotlightQueryDescriptor : NSObject <NSCopying> {

	CSSearchQuery* _searchQuery;
	FPQueryEnumerationSettings* _settings;

}

@property (nonatomic,readonly) FPQueryEnumerationSettings * settings;              //@synthesize settings=_settings - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(FPQueryEnumerationSettings *)settings;
-(id)queryStringForMountPoint:(id)arg1 ;
-(BOOL)keepCollectorsAlive;
-(BOOL)supportsQueryingAllMountPoints;
-(unsigned long long)desiredCount;
-(void)augmentQueryContext:(id)arg1 ;
-(BOOL)isEqualToItemQueryDescriptor:(id)arg1 ;
@end


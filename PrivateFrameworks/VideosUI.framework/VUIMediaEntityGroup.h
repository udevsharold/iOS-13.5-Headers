/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSObject, NSArray;

@interface VUIMediaEntityGroup : NSObject <NSCopying> {

	NSObject*<NSCopying> _identifier;
	NSArray* _mediaEntities;
	NSArray* _sortIndexes;

}

@property (nonatomic,copy) NSObject*<NSCopying> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * mediaEntities;                      //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,copy) NSArray * sortIndexes;                        //@synthesize sortIndexes=_sortIndexes - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<NSCopying>)identifier;
-(void)setIdentifier:(NSObject*<NSCopying>)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSArray *)mediaEntities;
-(NSArray *)sortIndexes;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(void)setSortIndexes:(NSArray *)arg1 ;
@end


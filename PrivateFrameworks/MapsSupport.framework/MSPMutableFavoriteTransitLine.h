/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPMutableFavorite.h>
#import <libobjc.A.dylib/MSPFavoriteTransitLine.h>

@class MSPTransitLineBookmark, NSString, NSUUID;

@interface MSPMutableFavoriteTransitLine : MSPMutableFavorite <MSPFavoriteTransitLine>

@property (nonatomic,readonly) MSPTransitLineBookmark * transitLineBookmark; 
@property (nonatomic,retain) id<GEOTransitLine> transitLine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * storageIdentifier; 
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
-(id<GEOTransitLine>)transitLine;
-(BOOL)isUserVisibleDuplicateOfFavorite:(id)arg1 ;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(id)initWithBookmarkStorage:(id)arg1 ;
-(MSPTransitLineBookmark *)transitLineBookmark;
-(void)setTransitLine:(id<GEOTransitLine>)arg1 ;
@end


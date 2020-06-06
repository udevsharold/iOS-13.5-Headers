/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVMediaSelectionInternal, AVAsset;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {

	AVMediaSelectionInternal* _mediaSelection;

}

@property (nonatomic,__weak,readonly) AVAsset * asset; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)propertyList;
-(id)_internal;
-(AVAsset *)asset;
-(id)initWithAsset:(id)arg1 propertyList:(id)arg2 ;
-(id)selectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(id)_initWithAsset:(id)arg1 ;
-(id)_initWithAsset:(id)arg1 selectedMediaArray:(id)arg2 ;
-(id)_initWithAssetWithoutGroupDictionaries:(id)arg1 ;
-(id)_selectedMediaArray;
-(id)_groupDictionaries;
-(id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)arg1 ;
@end


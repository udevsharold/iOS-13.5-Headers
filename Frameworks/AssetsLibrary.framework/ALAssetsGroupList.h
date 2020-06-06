/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibrary/ALAssetsGroup.h>

@protocol PLAssetContainerList;
@interface ALAssetsGroupList : ALAssetsGroup {

	id<PLAssetContainerList> _containerList;

}

@property (nonatomic,retain,readonly) id<PLAssetContainerList> containerList;              //@synthesize containerList=_containerList - In the implementation block
-(void)dealloc;
-(id)valueForProperty:(id)arg1 ;
-(id)initWithContainerList:(id)arg1 library:(id)arg2 type:(unsigned long long)arg3 ;
-(void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id<PLAssetContainerList>)containerList;
@end


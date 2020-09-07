/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPItemCollection.h>

@class FPExtensionEnumerationSettings, FPItemID;

@interface FPExtensionCollection : FPItemCollection {

	FPExtensionEnumerationSettings* _settings;
	FPItemID* _alternateID;

}

@property (copy) FPExtensionEnumerationSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)item:(id)arg1 isValidForObservedItemID:(id)arg2 ;
+(BOOL)_item:(id)arg1 isCollectionRootForObservedItemID:(id)arg2 ;
-(id)description;
-(id)initWithSettings:(id)arg1 ;
-(FPExtensionEnumerationSettings *)settings;
-(void)setSettings:(FPExtensionEnumerationSettings *)arg1 ;
-(id)enumeratedItemID;
-(BOOL)isRootItem:(id)arg1 ;
-(void)updateRootItem:(id)arg1 ;
-(BOOL)isCollectionValidForItem:(id)arg1 ;
-(id)createDataSourceWithSortDescriptors:(id)arg1 ;
-(id)scopedSearchQuery;
@end

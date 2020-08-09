/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:06:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryFramework/PhotoLibraryFramework-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@interface PLImageAccessibilityElement : UIAccessibilityElement {

	int _index;

}

@property (assign,nonatomic) int index;              //@synthesize index=_index - In the implementation block
-(id)delegate;
-(int)index;
-(id)dataSource;
-(void)setIndex:(int)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityURL;
-(id)_accessibilityPhotoDescription;
-(id)_accessibilityElementStoredUserLabel;
-(id)_axMainAssetURL;
-(long long)_albumPhotoIndex;
-(id)albumView;
@end

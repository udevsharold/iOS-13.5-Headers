/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContactsUI/ContactsUI-Structs.h>
@class UIImage, CNSharingProfileAvatarItem, NSString;

@interface CNSharingProfilePhotoPickerItem : NSObject {

	UIImage* _cachedPreviewImage;
	CNSharingProfileAvatarItem* _avatarItem;
	NSString* _symbolImageName;

}

@property (nonatomic,retain) UIImage * cachedPreviewImage;                         //@synthesize cachedPreviewImage=_cachedPreviewImage - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItem * avatarItem;              //@synthesize avatarItem=_avatarItem - In the implementation block
@property (nonatomic,retain) NSString * symbolImageName;                           //@synthesize symbolImageName=_symbolImageName - In the implementation block
-(id)originalImageWithSize:(CGSize)arg1 ;
-(id)compositeImageWithSize:(CGSize)arg1 ;
-(UIImage *)cachedPreviewImage;
-(void)setCachedPreviewImage:(UIImage *)arg1 ;
-(CNSharingProfileAvatarItem *)avatarItem;
-(void)setAvatarItem:(CNSharingProfileAvatarItem *)arg1 ;
-(NSString *)symbolImageName;
-(void)setSymbolImageName:(NSString *)arg1 ;
@end


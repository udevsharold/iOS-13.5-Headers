/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNSharingProfileAvatarItem : NSObject {

	BOOL _wasSetFromFullPhotoPicker;
	/*^block*/id _imageProvider;
	/*^block*/id _originalImageProvider;
	long long _type;
	NSString* _variantIdentifier;

}

@property (nonatomic,copy,readonly) id imageProvider;                      //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,copy,readonly) id originalImageProvider;              //@synthesize originalImageProvider=_originalImageProvider - In the implementation block
@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * variantIdentifier;                   //@synthesize variantIdentifier=_variantIdentifier - In the implementation block
@property (assign,nonatomic) BOOL wasSetFromFullPhotoPicker;               //@synthesize wasSetFromFullPhotoPicker=_wasSetFromFullPhotoPicker - In the implementation block
-(long long)type;
-(NSString *)variantIdentifier;
-(id)imageProvider;
-(id)initWithImageProvider:(/*^block*/id)arg1 type:(long long)arg2 ;
-(id)initWithImageProvider:(/*^block*/id)arg1 originalImageProvider:(/*^block*/id)arg2 type:(long long)arg3 ;
-(id)originalImageProvider;
-(void)setVariantIdentifier:(NSString *)arg1 ;
-(BOOL)wasSetFromFullPhotoPicker;
-(void)setWasSetFromFullPhotoPicker:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIContextActionsPresentationSource, SKUIDialogTemplateViewElement;

@interface SKUIContextActionsConfiguration : NSObject {

	SKUIContextActionsPresentationSource* _presentationSource;
	SKUIDialogTemplateViewElement* _dialogTemplate;

}

@property (nonatomic,retain) SKUIDialogTemplateViewElement * dialogTemplate;                         //@synthesize dialogTemplate=_dialogTemplate - In the implementation block
@property (nonatomic,retain) SKUIContextActionsPresentationSource * presentationSource;              //@synthesize presentationSource=_presentationSource - In the implementation block
-(void)setPresentationSource:(SKUIContextActionsPresentationSource *)arg1 ;
-(SKUIContextActionsPresentationSource *)presentationSource;
-(id)contextActions;
-(SKUIDialogTemplateViewElement *)dialogTemplate;
-(id)initWithDialogTemplate:(id)arg1 ;
-(id)_resourceImageForImageElement:(id)arg1 ;
-(void)setDialogTemplate:(SKUIDialogTemplateViewElement *)arg1 ;
@end


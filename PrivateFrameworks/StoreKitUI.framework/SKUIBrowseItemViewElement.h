/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIItemViewElement.h>

@class SKUIImageViewElement, NSArray;

@interface SKUIBrowseItemViewElement : SKUIItemViewElement {

	BOOL _expands;

}

@property (nonatomic,readonly) SKUIImageViewElement * decorationImage; 
@property (nonatomic,readonly) BOOL expands;                                        //@synthesize expands=_expands - In the implementation block
@property (nonatomic,readonly) NSArray * metadata; 
-(NSArray *)metadata;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUIImageViewElement *)decorationImage;
-(long long)pageComponentType;
-(BOOL)expands;
@end


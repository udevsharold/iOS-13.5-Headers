/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@interface SKUICardViewElement : SKUIViewElement {

	char _enabled;

}

@property (nonatomic,readonly) long long cardType; 
@property (getter=isAdCard,nonatomic,readonly) BOOL adCard; 
-(BOOL)isEnabled;
-(long long)cardType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(long long)pageComponentType;
-(BOOL)isAdCard;
@end


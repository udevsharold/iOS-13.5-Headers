/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@interface SKUIExpandViewElement : SKUIViewElement {

	BOOL _open;
	BOOL _previousIsOpen;

}

@property (getter=isOpen,nonatomic,readonly) BOOL open;              //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) BOOL previousIsOpen;                    //@synthesize previousIsOpen=_previousIsOpen - In the implementation block
-(BOOL)isOpen;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(BOOL)previousIsOpen;
-(void)setPreviousIsOpen:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSWPTwoPartAction.h>

@protocol TSWPHyperlinkHostRepProtocol;
@class TSWPHyperlinkField, TSDRep;

@interface TSWPHyperlinkAction : TSWPTwoPartAction {

	TSWPHyperlinkField* _hyperlinkField;
	TSDRep*<TSWPHyperlinkHostRepProtocol> _hyperlinkRep;

}
+(id)hyperlinkActionWithHyperlink:(id)arg1 inRep:(id)arg2 action:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)initWithHyperlink:(id)arg1 inRep:(id)arg2 action:(/*^block*/id)arg3 ;
@end


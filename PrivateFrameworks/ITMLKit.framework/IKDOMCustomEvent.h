/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKDOMEvent.h>
#import <libobjc.A.dylib/IKJSDOMCustomEvent.h>

@class IKJSObject, NSString, IKDOMNode, NSDate;

@interface IKDOMCustomEvent : IKDOMEvent <IKJSDOMCustomEvent> {

	IKJSObject* _detail;

}

@property (nonatomic,retain) IKJSObject * detail;                             //@synthesize detail=_detail - In the implementation block
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,retain,readonly) IKDOMNode * target; 
@property (nonatomic,retain,readonly) IKDOMNode * currentTarget; 
@property (nonatomic,readonly) long long eventPhase; 
@property (nonatomic,readonly) BOOL bubbles; 
@property (nonatomic,readonly) BOOL cancelable; 
@property (nonatomic,readonly) NSDate * timeStamp; 
@property (nonatomic,readonly) BOOL defaultPrevented; 
-(void)setDetail:(IKJSObject *)arg1 ;
-(IKJSObject *)detail;
-(id)initWithAppContext:(id)arg1 type:(id)arg2 xmlAttribute:(id)arg3 canBubble:(BOOL)arg4 isCancelable:(BOOL)arg5 detail:(id)arg6 ;
-(id)initWithType:(id)arg1 eventInit:(id)arg2 ;
@end


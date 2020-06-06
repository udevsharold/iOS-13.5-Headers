/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REBacktrackingTokenBuffer.h>

@protocol RETokenBuffer;
@class NSMutableArray, NSString, REScriptToken;

@interface RETokenStack : NSObject <REBacktrackingTokenBuffer> {

	id<RETokenBuffer> _buffer;
	unsigned long long _position;
	NSMutableArray* _tokenStack;
	NSMutableArray* _positionStack;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) REScriptToken * currentToken; 
-(BOOL)isEmpty;
-(void)next;
-(void)pop;
-(void)consume;
-(REScriptToken *)currentToken;
-(void)push;
-(id)initWithTokenBuffer:(id)arg1 ;
@end


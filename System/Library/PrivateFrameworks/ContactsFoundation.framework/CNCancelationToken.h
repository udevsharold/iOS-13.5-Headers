/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCancelable.h>
#import <libobjc.A.dylib/CNCancelationToken.h>

@protocol CNCancelationToken <NSObject>
@required
-(void)performBlock:(/*^block*/id)arg1;
-(BOOL)isCanceled;

@end


@class NSMutableArray, NSString;

@interface CNCancelationToken : NSObject <CNCancelable, CNCancelationToken> {

	BOOL _isCanceled;
	NSMutableArray* _cancelationBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenWrappingCancelable:(id)arg1 ;
+(id)tokenWithCancelationBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)cancel;
-(void)performBlock:(/*^block*/id)arg1 ;
-(BOOL)isCanceled;
-(void)addCancelationBlock:(/*^block*/id)arg1 ;
-(void)addCancelable:(id)arg1 ;
-(id)nts_cancel;
-(void)callCancelationBlocks:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIPowerDownViewInterface <NSObject>
@property (assign,nonatomic,__weak) id<SBUIPowerDownViewDelegate> delegate; 
@required
-(id<SBUIPowerDownViewDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;

@end


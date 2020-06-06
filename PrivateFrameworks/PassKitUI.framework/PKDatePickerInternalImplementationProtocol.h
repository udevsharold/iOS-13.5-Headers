/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol PKDatePickerInternalImplementationProtocol <NSObject>
@property (nonatomic,retain) NSDate * date; 
@required
-(NSDate *)date;
-(void)setDate:(id)arg1;
-(void)prepareToDie;
-(id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4 locale:(id)arg5 calendar:(id)arg6;
-(void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFFormMetadataObserver <NSObject>
@required
-(void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
-(void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3;
-(void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
-(void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2;
-(void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2;
-(void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1 inFrame:(id)arg2 shouldSubmit:(BOOL)arg3;
-(void)didUpdateUnsubmittedForm:(id)arg1 inFrame:(id)arg2;
-(void)didRemoveAutomaticStrongPasswordInForm:(id)arg1 inputSessionUserObject:(id)arg2 inFrame:(id)arg3;

@end

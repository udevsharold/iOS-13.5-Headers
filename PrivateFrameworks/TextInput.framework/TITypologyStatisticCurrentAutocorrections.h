/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyStatistic.h>

@class TIAutocorrectionList, TICandidateRequestToken;

@interface TITypologyStatisticCurrentAutocorrections : TITypologyStatistic {

	TIAutocorrectionList* _autocorrections;
	TICandidateRequestToken* _requestToken;

}

@property (nonatomic,retain) TIAutocorrectionList * autocorrections;              //@synthesize autocorrections=_autocorrections - In the implementation block
@property (nonatomic,retain) TICandidateRequestToken * requestToken;              //@synthesize requestToken=_requestToken - In the implementation block
-(TICandidateRequestToken *)requestToken;
-(void)setRequestToken:(TICandidateRequestToken *)arg1 ;
-(TIAutocorrectionList *)autocorrections;
-(void)setAutocorrections:(TIAutocorrectionList *)arg1 ;
-(void)visitRecordAutocorrections:(id)arg1 ;
@end


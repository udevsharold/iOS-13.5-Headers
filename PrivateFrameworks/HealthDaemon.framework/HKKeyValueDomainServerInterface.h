/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKKeyValueDomainServerInterface <HKUnitTestingTaskServerInterface>
@required
-(void)remote_setNumber:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_setDate:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_setString:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_setData:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_setValuesWithDictionary:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_removeValuesForKeys:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_numberForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_dateForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_stringForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_dataForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_allValuesWithCompletion:(/*^block*/id)arg1;

@end


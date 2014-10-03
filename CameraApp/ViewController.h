//
//  ViewController.h
//  CameraApp
//
//  Created by Alexander Kuliev on 10/3/14.
//  Copyright (c) 2014 Alexander Kuliev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) IBOutlet UIImageView *imageView;

- (IBAction)takePhoto:(id)sender;
- (IBAction)selectPhoto:(id)sender;

@end

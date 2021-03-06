//Team: Gregory Ayo , Olawale Ayejuyone, Barry Boubacar
//Author: Gregory Ayo
//Creation: 12/7/17
#ifndef ADDRESS_H
#define ADDRESS_H
#include "Archive.h"

namespace lab3

{

  class Address
  
  {
  
    private:
    
    std::string street;
    std::string city;
    std::string state;
    std::string zipcode;
    
    public:
    
    Address()
    
    {
    
      street = "";
      city = "";
      state = "NY";
      zipcode = "11111";
    
    }
    
      Address(std::string street,std::string city,std::string state ,std::string zipcode)
      
      {
      
        this->street = street;
        
        for(int i = 0;i < city.length();i+=1)
        
      {
      
      if(!isalpha(city[i]))
      
      {
      
        this->city = "";
      
      }
      
      else
      
        this->city = city;
      
      }
      
      if(state.length() != 2)
      
      {
      
        state = "NY";
      
      }
      
      else
      
      {
      
        this->state = state;
      
      }
      
      if(zipcode.length() != 5)
      
      {
      
        zipcode = "11111";
      
      }
      
      else
      
      {
      
        this->zipcode = zipcode;
      
      }
      
      }
      
      Address(const Address& other)
      
      {
      
        street = other.street;
        city = other.city;
        state = other.state;
        zipcode = other.zipcode;
      
      }
      
      Address& operator=(const Address& rhs)
      
      {
      
      if(this != &rhs)
      
      {
        
        this->street = rhs.street; 
        this->city = rhs.city;
        this->state = rhs.state;
        this->zipcode = rhs.zipcode;  
     
      
      }
      
        return *this;
      
      }
      
      ~Address(){}
      
      std::string& GetStreet()
      
      {
      
        return street;
      
      }
      
      std::string& GetCity()
      
      {
      
        return city;
      
      }
      
      std::string& GetState()
      
      {
      
        return state;
      
      }
      
      std::string& GetZipcode()
      
      {
        
        return zipcode;
      
      }
      
      void SetStreet(const std::string& str)
      
      {
      
        street = str;
      
      }
      
      void SetCity(const std::string& cit)
      
      {
      
        city = cit;
      
      }
      
      void SetState(const std::string& stat)
      
      {
      
        state = stat;
      
      }
      
      void SetZipcode(const std::string& zip)
      
      {
      
        zipcode = zip;
      
      }
      
      std::string ToString() const
      
      {
      
        std::stringstream out;
        
        out << street << "\n" << city << " , " << state << " " << zipcode << "\n";
        
        return out.str();
        
        }
        
        friend std::ostream& operator<<(std::ostream& out,const Address& obj)
        
        {
        
          out << obj.ToString();
          
          return out;
        
        }
        
          };
            
          }

#endif

